package main

import "testing"

func TestIsValidParentheses(t *testing.T) {
	testCases := []struct {
		input    string
		expected bool
	}{
		{"{[()]}", true},   // Valid parentheses string
		{"{[(])}", false},  // Invalid parentheses string
		{"", true},         // An empty string is considered valid
		{"()", true},       // Valid parentheses string
		{"(())", true},     // Valid parentheses string
		{"[({})]", true},   // Valid parentheses string
		{"[({})]}", false}, // Invalid parentheses string
		{"{[()()]}", true}, // Valid parentheses string
		{"{[()()]", false}, // Invalid parentheses string
		{"{{[()]}", false}, // Invalid parentheses string
		{"[({})]", true},   // Valid parentheses string
	}

	for _, testCase := range testCases {
		t.Run(testCase.input, func(t *testing.T) {
			result := isValidParentheses(testCase.input)
			if result != testCase.expected {
				t.Errorf("Input: %s, Expected: %v, Got: %v", testCase.input, testCase.expected, result)
			}
		})
	}
}

func BenchmarkIsValidParentheses(b *testing.B) {
	inputStr := "{[()]}"
	for i := 0; i < b.N; i++ {
		isValidParentheses(inputStr)
	}
}
