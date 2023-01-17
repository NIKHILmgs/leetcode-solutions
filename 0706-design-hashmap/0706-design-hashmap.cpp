class MyHashMap {
public:
    
static const int sz = 1000001;
int v[sz];
    MyHashMap() {
        memset(v,-1,1000001*sizeof(int));
    }
    
    void put(int key, int value) {
        int a = key;
        int b = value;
        v[a]=b;
    }
    
    int get(int key) {
        return v[key];
    }
    
    void remove(int key) {
        v[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */