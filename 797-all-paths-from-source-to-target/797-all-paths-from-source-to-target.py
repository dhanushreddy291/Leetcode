class Solution:
    def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:

        def DFS(source, destination, graph, currPath, allPaths):
            if source == destination:
                allPaths.append(currPath.copy())
            else:
                for node in graph[source]:
                    currPath.append(node)
                    DFS(node, destination, graph, currPath, allPaths)
                    currPath.pop()
        
        allPaths = []
        currPath = [0]
        N = len(graph)
        DFS(0, N - 1, graph, currPath, allPaths)

        return allPaths