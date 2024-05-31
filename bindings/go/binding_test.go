package tree_sitter_ott_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-ott"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_ott.Language())
	if language == nil {
		t.Errorf("Error loading Ott grammar")
	}
}
