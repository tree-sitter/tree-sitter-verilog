#!/usr/bin/env node
'use strict';

const fs = require('fs');
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
      console.log('generate');
      const p1 = cp.spawn('tree-sitter', ['generate']);
      p1.stderr.on('data', data => {
        console.error(data.toString());
      });
      p1.on('close', () => {
        gyp();
      });
    } else {
      gyp();
    }
  }
);

/* eslint no-console: 0 */
