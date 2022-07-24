class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        Stack = []
        for token in tokens:
            if token in "+-/*":
                r, l = Stack.pop(), Stack.pop()
                if token == "+":
                    Stack.append(l + r)
                elif token == '-':
                    Stack.append(l - r)
                elif token == '*':
                    Stack.append(l * r)
                elif token == '/':
                    Stack.append(int(float(l)/r))
            else:
                Stack.append(int(token))
        return Stack.pop()
