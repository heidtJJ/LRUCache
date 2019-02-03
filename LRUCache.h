#ifndef LRU_CACHE
#define LRU_CACHE

#include <unordered_map>
#include <list>

using std::unordered_map;
using std::list;

struct CacheNode{
    CacheNode(const int& key_, const int value_)
        : key(key_), value(value_){};
    int key;
    int value;
};

class LRUCache{
    public:
        LRUCache(const int& capacity_) : capacity(capacity_) {};
        int get(const int& value);
        void put(const int& key, const int& value);

    private:
        unordered_map<int, list<CacheNode>::iterator> cacheMap;
        list<CacheNode> cacheList;
        unsigned int capacity;
}; 

#endif