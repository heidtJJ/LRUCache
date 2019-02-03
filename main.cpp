#include <iostream>
#include <vector>
#include <string>

#include "LRUCache.h"

using std::cout;
using std::endl;

int main(){
    LRUCache lruCache(1);
    lruCache.put(2, 1);

    lruCache.put(3, 2);
    cout <<"here4\n";
    lruCache.get(2);
    cout <<"here5\n";
    lruCache.get(3);
    cout <<"here6\n";

    cout << lruCache.get(1) << endl;
    cout << lruCache.get(3) << endl;
    cout << lruCache.get(5) << endl;
    cout << lruCache.get(7) << endl;
    cout << lruCache.get(9) << endl;
    cout << lruCache.get(11) << endl;

    return 0;
}
