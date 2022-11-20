class MyHashMap {
public:
    // Implimenting through vector
    vector<int>x;
    //constructor
    MyHashMap() {
        vector<int>y(10000001 , -1);
        x = y;
    }
    
    void put(int key, int value) {
        x[key] = value;
    }
    
    int get(int key) {
        return x[key];
    }
    
    void remove(int key) {
        x[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */