#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define f first
#define s second
 
signed main() {
    int n, target;
    cin>>n>>target;
    vector<int> prefix(n+1, 0);
    for (int i = 1; i <= n; i++){
        cin>>prefix[i];
        prefix[i]+=prefix[i-1];
    }
    map<int, int> mp;
    int cnt = 0;
    for (int i = 0; i < n+1; i++){
        cnt+=mp[prefix[i]-target];
        mp[prefix[i]]++;
    }
    
    cout<<cnt;
}
