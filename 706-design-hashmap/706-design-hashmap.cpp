class MyHashMap {

struct LinkedList {
    int key, val;
    LinkedList* next;
    LinkedList(int key, int val, LinkedList* next = NULL) {
        this -> key = key;
        this -> val = val;
        this -> next = next;
    }  
};

public:
    int PrimeNum = 1201;
    vector <LinkedList*> Map;
    MyHashMap() {
        for (int i = 0; i < PrimeNum; i++) {
            Map.push_back(NULL);
        }
    }
    
    void put(int key, int value) {
        int Mod = key % PrimeNum;
        if (Map[Mod] == NULL) {
            Map[Mod] = new LinkedList(key, value);  
        }
        else {
            LinkedList* Current = Map[Mod];
            while (Current -> next != NULL && Current -> key != key) Current = Current -> next;
            if (Current -> key == key) Current -> val = value;
            else Current -> next = new LinkedList(key, value);
        }
    }
    
    int get(int key) {
        int Mod = key % PrimeNum;
        if (Map[Mod] == NULL) return -1;
        else {
            LinkedList* Current = Map[Mod];
            while (Current != NULL) {
                if (Current -> key == key) return Current -> val;
                Current = Current -> next;
            }
            return -1;
        }
    }
    
    void remove(int key) {
        cout << key << "\n";
        int Mod = key % PrimeNum;
        if (Map[Mod] == NULL) return;
        else {
            LinkedList* Current = Map[Mod], *Prev = Current;
            if (Current -> key == key) {
                Map[Mod] = Current -> next;
                delete(Current);
                return;
            }
            Current = Current -> next;
            while (Current != NULL) {
                if (Current -> key == key) {
                    Prev -> next = Current -> next;
                    delete(Current);
                    return;
                }
                Prev = Current;
                Current = Current -> next;
            }
        }
    }
};