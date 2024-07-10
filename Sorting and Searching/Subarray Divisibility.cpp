#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define f first
#define s second
 
signed main() {
    int n;
    cin>>n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++){
        cin>>a[i];
        a[i]%=n;
    }
    map<int, int> mp;
    mp[0]++;
    int cnt = 0, prefix = 0;
    for (int i = 0; i < n; i++){
        prefix+=a[i]+n; prefix%=n;
        cnt+=mp[prefix];
        mp[prefix]++;
    }
    cout<<cnt;
}
