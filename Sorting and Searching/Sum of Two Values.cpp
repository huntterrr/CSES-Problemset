#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n, x;
    cin>>n>>x;
    vector<int> vec(n);
    for (int i = 0; i < n; i++){
        cin>>vec[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        if(mp.count(x-vec[i])){cout<<mp[x-vec[i]]+1<<' '<<i+1; return 0;}
        mp[vec[i]] = i;
    }
    cout<<"IMPOSSIBLE";
}
