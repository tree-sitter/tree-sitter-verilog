try {
  module.exports = require("./build/Release/tree_sitter_verilog_binding");
} catch (error) {
  try {
    module.exports = require("./build/Debug/tree_sitter_verilog_binding");
  } catch (_) {
    throw error
  }
}
