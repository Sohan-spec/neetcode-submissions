class MyHashSet {
public:
    vector<int>arr;
    MyHashSet() {

    }
    
    void add(int key) {
        if(contains(key))return;
        arr.push_back(key);
    }
    
    void remove(int key) {
        arr.erase(std::remove(arr.begin(), arr.end(), key), arr.end());

    }
    
    bool contains(int key) {
        return find(arr.begin(),arr.end(),key)!=arr.end();
    }
};

