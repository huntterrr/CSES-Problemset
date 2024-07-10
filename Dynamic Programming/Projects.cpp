#include <bits/stdc++.h>
#define int long long int
using namespace std;
#define f first
#define s second

int cmp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b){
    if(a.f.s==b.f.s){
        if(a.f.f==b.f.f) return a.s<b.s;
        return a.f.f<b.f.f;
    }
    return a.f.s<b.f.s;
}
 
signed main() {
    int n;
    cin>>n;
    vector<pair<pair<int, int>, int>> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        cin>>a[i].f.f>>a[i].f.s>>a[i].s;
    }
    sort(a.begin(), a.end(), cmp);
    int res = 0;
    mp[0] = 0;
    for (int i = 0; i < n; i++){
        auto it = mp.lower_bound(a[i].f.f);
        it--;
        res = max(res, a[i].s+it->second);
        mp[a[i].f.s] = res;
    }
    
    cout<<res;
}
