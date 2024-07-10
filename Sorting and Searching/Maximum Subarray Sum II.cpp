#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define f first
#define s second
 
signed main() {
    int n, A, B;
    cin>>n>>A>>B;
    vector<int> pfx(n+1, 0);
    for (int i = 1; i <= n; i++){cin>>pfx[i]; pfx[i]+=pfx[i-1];}
    
    int res = -1e18;
    multiset<int> mls;
    for (int i = A; i <= B; i++) mls.insert(pfx[i]);
    
    for (int i = 1; i <= n-A+1; i++){
        res = max(res, *mls.rbegin()-pfx[i-1]);
        mls.erase(mls.find(pfx[i+A-1]));
        if(i+B<=n) mls.insert(pfx[i+B]);
    }
    cout<<res;
}