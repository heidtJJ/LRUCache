#include <iostream>
#include <vector>
#include <string>

#include "LRUCache.h"

using std::cout;
using std::endl;

int main(){
    LRUCache lruCache(2);
    lruCache.put(2, 1);
    lruCache.put(3, 2);
    lruCache.get(2);
    lruCache.get(3);

    cout << lruCache.get(1) << endl;
    cout << lruCache.get(3) << endl;
    cout << lruCache.get(5) << endl;
    cout << lruCache.get(7) << endl;
    cout << lruCache.get(9) << endl;
    cout << lruCache.get(11) << endl;

    return 0;
}
