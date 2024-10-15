package tree_sitter_verilog_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_verilog "github.com/tree-sitter/tree-sitter-verilog/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_verilog.Language())
	if language == nil {
		t.Errorf("Error loading Verilog grammar")
	}
}
