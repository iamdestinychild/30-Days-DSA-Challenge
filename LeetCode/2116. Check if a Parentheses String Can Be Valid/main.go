package main

import "fmt"

func isValidParentheses(s string) bool {
	stack := []rune{}
	parenthesesMap := map[rune]rune{')': '(', '}': '{', ']': '['}

	for _, char := range s {
		if char == '(' || char == '{' || char == '[' {
			stack = append(stack, char)
		} else if char == ')' || char == '}' || char == ']' {
			if len(stack) == 0 {
				return false
			}
			top := stack[len(stack)-1]
			stack = stack[:len(stack)-1]
			if parenthesesMap[char] != top {
				return false
			}
		}
	}

	return len(stack) == 0
}

func main() {
	inputStr := "{[()]}"

	if isValidParentheses(inputStr) {
		fmt.Printf("The parentheses string '%s' is valid.\n", inputStr)
	} else {
		fmt.Printf("The parentheses string '%s' is not valid.\n", inputStr)
	}
}
