#!/usr/bin/env node
'use strict';

const fs = require('fs');
const cp = require('child_process');

const gyp = cb => {
  console.log('build');
  let proc;
  try {
    proc = cp.spawn('node-gyp', ['configure', 'build']);
  } catch (err) {
    console.error('error spawning node-gyp');
    return;
  }
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
      let proc;
      try {
        proc = cp.spawn('tree-sitter', ['generate']);
      } catch (err) {
        proc = cp.spawn('tree-sitter.exe', ['generate']);
      }
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
