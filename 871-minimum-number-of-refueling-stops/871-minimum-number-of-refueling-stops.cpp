class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int i = 0, N = stations.size(), fuel = startFuel, stops = 0;
        priority_queue <int> Heap;
        while (i < N) {
            if ((Heap.empty() && fuel < stations[i][0]) || fuel >= target) break;
            if (fuel < stations[i][0]){
                while (!Heap.empty() && fuel < stations[i][0]) {
                    fuel += Heap.top();
                    Heap.pop();
                    stops++;
                }
            } else {
                Heap.push(stations[i++][1]);
            }
        }
        while (!Heap.empty() && fuel < target) {
            fuel += Heap.top();
            Heap.pop();
            stops++;
        }
        return fuel >= target ? stops: -1;
    }
};