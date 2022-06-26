class Solution:
    def interpret(self, command: str) -> str:
        Ans, i, N = "", 0, len(command)
        while i < N:
            if command[i] == '(':
                if command[i + 1] == ')':
                    Ans += 'o'
                else:
                    while command[i + 1] != ')':
                        Ans += command[i + 1]
                        i += 1
                i += 2
            else:
                Ans += command[i]
                i += 1
        return Ans
