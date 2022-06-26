import queue

class Solution:
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
        N, Queue = len(rooms), queue.Queue() 
        Visited = [False for x in range(N)]
        for room in rooms[0]:
            Queue.put(room)
            Visited[room] = True
        Visited[0] = True
        while Queue.qsize() > 0:
            roomNum = Queue.get()
            for room in rooms[roomNum]:
                if not Visited[room]:
                    Queue.put(room)
                    Visited[room] = True
        return not False in Visited
