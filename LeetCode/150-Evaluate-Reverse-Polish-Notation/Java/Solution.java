class Solution {
    public int evalRPN(String[] tokens) {
        // Init. stack for the integers
        Stack<Integer> stack = new Stack<>();

        // Iterate through all the tokens
        for (String token : tokens) {
            // Check symbol
            if (token.equals("+")) {
                // Push the result to the stack
                stack.push(stack.pop() + stack.pop());
            } else if (token.equals("-")) {
                int b = stack.pop();
                int a = stack.pop();
                stack.push(a - b);
            } else if (token.equals("*")) {
                stack.push(stack.pop() * stack.pop());
            } else if (token.equals("/")) {
                int b = stack.pop();
                int a = stack.pop();
                stack.push(a / b);
            } else { // If it is a number, parse it and push to the stack
                stack.push(Integer.parseInt(token));
            }
        }
        // Pop the result
        return stack.pop();
    }
}