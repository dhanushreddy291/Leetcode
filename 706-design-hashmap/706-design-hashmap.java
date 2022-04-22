class MyHashMap {
    int[] HashMap;
    public MyHashMap() {
        HashMap = new int[1000001];
    }
    
    public void put(int key, int value) {
        HashMap[key] = value + 1;
    }
    
    public int get(int key) {
        return HashMap[key] - 1;
    }
    
    public void remove(int key) {
        HashMap[key] = 0;
    }
}

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap obj = new MyHashMap();
 * obj.put(key,value);
 * int param_2 = obj.get(key);
 * obj.remove(key);
 */