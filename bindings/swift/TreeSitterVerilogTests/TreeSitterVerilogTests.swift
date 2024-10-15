import XCTest
import SwiftTreeSitter
import TreeSitterVerilog

final class TreeSitterVerilogTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_verilog())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Verilog grammar")
    }
}
