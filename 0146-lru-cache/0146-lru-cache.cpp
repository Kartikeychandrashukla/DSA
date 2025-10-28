class LRUCache {
    int capacity;
    list<pair<int,int>>lt;
    unordered_map<int,list<pair<int,int>>::iterator>mp;
public:
    LRUCache(int capacity) {
        this->capacity=capacity;
    }
    
    int get(int key) {
        if(mp.find(key)!=mp.end())
        {
            auto it=mp[key];
            int value=it->second;
            lt.erase(it);
            lt.push_front({key,value});
            mp[key]=lt.begin();
            return value;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end())
        {
            auto it=mp[key];
            lt.erase(it);
        }
        else if((int)lt.size()==capacity)
        {
            auto it=lt.back();
            mp.erase(it.first);
            lt.pop_back();
        }
lt.push_front({key,value});
auto it=lt.begin();
mp[key]=it;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */