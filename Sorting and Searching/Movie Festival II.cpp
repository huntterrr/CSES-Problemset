#include <bits/stdc++.h>
using namespace std;
 
int n, k;
 
void solve(){
    cin>>n>>k;
    multiset<int> q;
    for(int i = 0;i<k;i++) q.insert(0);
    vector<pair<int, int>> arr(n);
    for(int i = 0;i<n;i++){
        int a, b;cin>>a>>b;
        arr[i] = {b, a};
    }
    int cnt = 0;
    sort(begin(arr), end(arr));
    for(int i = 0;i<n;i++){
        int e = arr[i].first, s = arr[i].second;
        auto it = q.upper_bound(s);
        if(it!=q.begin()){
            it--;
            q.erase(it);
            q.insert(e);
            cnt++;
        }
    }
    cout<<cnt;
}
 
signed main() {
    ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--) solve();
}