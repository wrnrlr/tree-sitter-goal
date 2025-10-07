package tree_sitter_goal_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/wrnrlr/tree-sitter-goal"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_goal.Language())
	if language == nil {
		t.Errorf("Error loading Goal grammar")
	}
}
