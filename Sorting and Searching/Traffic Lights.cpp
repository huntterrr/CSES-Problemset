#include <bits/stdc++.h>
using namespace std;
 
signed main() {
    int x, n;
    cin >> x >> n;
    set<int> positions;
    multiset<int> lengths;
    positions.insert(0);
    positions.insert(x);
    lengths.insert(x);
    for (int i = 0; i < n; i++){
        int a;
        cin>>a;
        auto it = positions.insert(a).first;
        int prevElem = *prev(it);
        int nextElem = *next(it);
        lengths.erase(lengths.find(nextElem-prevElem));
        lengths.insert(a-prevElem);
        lengths.insert(nextElem-a);
        cout<<*lengths.rbegin()<<' ';
    }
    
}
