class Solution:
    def numOfMinutes(self, n: int, headID: int, manager: List[int], informTime: List[int]) -> int:

        def DFS(node, currTime, maxTime, graph, informTime):
            maxTime[0] = max(maxTime[0], currTime)
            for subNode in graph[node]:
                DFS(subNode, currTime + informTime[node], maxTime, graph, informTime)

        maxTime = [0]
        N = len(manager)
        graph = [[] for i in range(n)]
        for i in range(N):
            if manager[i] != -1:
                graph[manager[i]].append(i)

        DFS(headID, 0, maxTime, graph, informTime)
        
        return maxTime[0]