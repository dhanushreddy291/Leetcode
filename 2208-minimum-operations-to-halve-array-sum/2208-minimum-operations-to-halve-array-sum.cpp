class Solution {
public:
    int halveArray(vector<int>& nums) {
        double ArraySum = 0, Sum = 0;
        int count = 0;
        priority_queue <double, vector <double>> Heap;
        for (int a : nums) {
            Heap.push(a);
            ArraySum += a;
        }
        ArraySum /= 2.0;
        while (Sum < ArraySum) {
            double temp = Heap.top();
            Heap.pop();
            temp /= 2.0;
            Heap.push(temp);
            Sum += temp;
            count++;
        }
        return count;
    }
};