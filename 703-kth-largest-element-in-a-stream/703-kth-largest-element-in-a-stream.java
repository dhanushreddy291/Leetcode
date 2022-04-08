class KthLargest {
    final PriorityQueue <Integer> Heap;
    final int K;
    public KthLargest(int k, int[] nums) {
        this.Heap = new PriorityQueue <Integer> ();
        this.K = k;
        for (int i = 0; i < nums.length; i++) {
            this.Heap.add(nums[i]);
            if (this.Heap.size() > k) this.Heap.poll();
        }
    }
    
    public int add(int val) {
        if (this.Heap.size() < this.K) {
            this.Heap.add(val);
            return Heap.peek();
        }
        if (this.Heap.peek() < val) {
            this.Heap.remove();
            this.Heap.add(val);
        }
        return this.Heap.peek();
    }
}

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest obj = new KthLargest(k, nums);
 * int param_1 = obj.add(val);
 */