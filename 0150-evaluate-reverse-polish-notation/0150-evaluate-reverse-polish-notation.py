class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []

        for token in tokens:
            if token == '+':
                stack.append(stack.pop() + stack.pop())
            elif token == '-':
                num1, num2 = stack.pop(), stack.pop()
                stack.append(num2 - num1)
            elif token == '*':
                stack.append(stack.pop() * stack.pop())
            elif token == '/':
                num1, num2 = stack.pop(), stack.pop()
                stack.append(int(num2 / num1)) # Truncates toward zero
            else:
                stack.append(int(token)) # Number
        
        return stack[0]

# Postfix notation / Reverse Polish Notation (RPN) is a mathematical notation where operators follow their operands (e.g. 3+4, becomes 34+). It eliminate the need for parentheses and operator precedence rules, making expression evaluation easy to implement with a stack structure.
# TC: O(N)
# SC: O(N)