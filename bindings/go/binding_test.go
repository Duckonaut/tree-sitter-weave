package tree_sitter_weave_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_weave "git.duckonaut.dev/tree-sitter-weave/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_weave.Language())
	if language == nil {
		t.Errorf("Error loading weave grammar")
	}
}
