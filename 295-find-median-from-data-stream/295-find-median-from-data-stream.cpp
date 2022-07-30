class MedianFinder {
private:
    priority_queue <int> maxHeap;
    priority_queue <int, vector <int>, greater <int>> minHeap;
public:
    MedianFinder() {
    }
    
    void addNum(int num) {
        if (maxHeap.empty()) {
            maxHeap.push(num);
        } else {
            if (maxHeap.top() > num) {
                maxHeap.push(num);
                if (maxHeap.size() > 1 + minHeap.size()) {
                    minHeap.push(maxHeap.top());
                    maxHeap.pop();
                }
            } else {
                minHeap.push(num);
                if (minHeap.size() > maxHeap.size()) {
                    maxHeap.push(minHeap.top());
                    minHeap.pop();
                }
            }
        }
    }
    
    double findMedian() {
        if (maxHeap.size() == minHeap.size()) {
            return (maxHeap.top() + minHeap.top()) / 2.0;
        }
        return maxHeap.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */