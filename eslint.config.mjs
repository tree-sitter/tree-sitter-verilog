import treesitter from 'eslint-config-treesitter';

export default [
  ...treesitter,
  {
    rules: {
      'spaced-comment': ['off'],
      'no-multi-spaces': ['off'],
    },
  },
];
