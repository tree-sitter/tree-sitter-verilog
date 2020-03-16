#!/usr/bin/env node
'use strict';

const fs = require('fs');
const path = require('path');
const cp = require('child_process');

const ext = (process.platform === 'win32' ? '.exe' : '');

const tspath = path.resolve(
  process.cwd(), './node_modules/tree-sitter-cli', 'tree-sitter' + ext
);

const gyp = cb => {
  console.log('build');
  const proc = cp.spawn('node-gyp' + ext, ['configure', 'build']);
  proc.stderr.on('data', data => {
    console.error(data.toString());
  });
  proc.on('close', (cb || (() => {
    console.log('done');
  })));
};

fs.access('src/parser.c',
  (fs.constants.F_OK | fs.constants.R_OK),
  err => {
    if (err) {
      console.log('tree-sitter path:', tspath);
      console.log('tree-sitter --version');
      cp.execFile(tspath, ['--version'], (error, stdout, stderr) => {
        if (error) {
          throw error;
        }
        console.log(stdout);
        console.error(stderr);
        console.log('tree-sitter generate');
        cp.execFile(tspath, ['generate'], (error, stdout, stderr) => {
          if (error) {
            throw error;
          }
          console.log(stdout);
          console.error(stderr);
          gyp();
        });
      });
    } else {
      gyp();
    }
  }
);

/* eslint no-console: 0 */
