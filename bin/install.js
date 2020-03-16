#!/usr/bin/env node
'use strict';

const fs = require('fs');
const path = require('path');
const cp = require('child_process');

const gyp = cb => {
  console.log('build');
  const proc = cp.spawn('node-gyp', ['configure', 'build']);
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
      const pat = path.resolve(process.cwd(), './node_modules/.bin/tree-sitter');
      console.log('generate', pat);
      const proc = cp.spawn(pat, ['generate']);
      proc.stderr.on('data', data => {
        console.error(data.toString());
      });
      proc.on('close', () => {
        gyp();
      });
    } else {
      gyp();
    }
  }
);

/* eslint no-console: 0 */
