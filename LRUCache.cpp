#include "LRUCache.h"
#include <iostream>

using std::cout;// For debugging
using std::endl;// For debugging

int LRUCache::get(const int& key){
    if(cacheMap.find(key) == cacheMap.end())
        return -1;
    else{
        // Find the CacheNode to get the key, value data.
        CacheNode cacheNode = *cacheMap[key];
        // Remove old iterator and add to front of list.
        cacheList.erase(cacheMap[key]);
        cacheList.push_front(cacheNode);
        cacheMap[key] = cacheList.begin();
        return cacheNode.value;
    }
}

void LRUCache::put(const int& key, const int& value){
    if(cacheMap.find(key) != cacheMap.end())
        // Value is already in cache.
        cacheList.erase(cacheMap[key]);
    else{
        if(cacheList.size() == capacity){
            // Cache is full.
            CacheNode backValue = cacheList.back();
            cacheList.pop_back();
            cacheMap.erase(backValue.key);
        }
    }
    cacheList.push_front(CacheNode(key, value));
    cacheMap[key] = cacheList.begin();
}