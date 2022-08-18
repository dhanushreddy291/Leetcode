class Solution {
public:
    int minSetSize(vector<int>& arr) {
        priority_queue <pair <int, int>> Heap;
        unordered_map <int, int> Map;
        for (int& num: arr) {
            Map[num]++;
        }
        for (auto iter: Map) {
            Heap.push({iter.second, iter.first});
        }
        int N = arr.size(), currSize = 0, setSize = 0;
        while (!Heap.empty()) {
            currSize += Heap.top().first;
            setSize++;
            Heap.pop();
            if (currSize >= N / 2) return setSize; 
        }
        return 1;
    }
};