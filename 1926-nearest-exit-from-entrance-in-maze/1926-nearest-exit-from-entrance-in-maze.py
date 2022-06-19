import queue

class Solution:
    def nearestExit(self, maze: List[List[str]], entrance: List[int]) -> int:

        def ValidPos(x, y, X, Y):
            return x >= 0 and y >= 0 and x < X and y < Y

        Queue = queue.Queue()
        dS = [-1, 1, 0, 0]
        N, M = len(maze), len(maze[0])
        Queue.put((entrance[0], entrance[1], 0))
        Visited = [[False for x in range(M)] for x in range(N)]
        Visited[entrance[0]][entrance[1]] = True

        while Queue.qsize() > 0:
            (x, y, z) = Queue.get()
            for i in range(4):
                if not ValidPos(x + dS[i], y + dS[3 - i], N, M):
                    if z != 0: 
                        return z
                elif maze[x + dS[i]][y + dS[3 - i]] == '.' and not Visited[x + dS[i]][y + dS[3 - i]]:
                    Visited[x + dS[i]][y + dS[3 - i]] = True
                    Queue.put((x + dS[i], y + dS[3 - i], z + 1))
        
        return -1