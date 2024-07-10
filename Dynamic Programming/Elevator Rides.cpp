#include <bits/stdc++.h>
#define int long long int
using namespace std;
#define f first
#define s second
 
signed main() {
    int n, x;
    cin>>n>>x;
    vector<int> a(n);
    for(int &i: a) cin>>i;
    vector<pair<int, int>> dp(1<<n, {1e9, 1e9});
    dp[0] = {1, 0};
    for (int mask = 1; mask < 1<<n; mask++){
        for (int bit = 0; bit < n; bit++){
            if((1<<bit)&mask){
                int prev = dp[mask^(1<<bit)].s;
                if(prev+a[bit]<=x){
                    dp[mask] = min(dp[mask], {dp[mask^(1<<bit)].f, prev+a[bit]});
                }else{
                    dp[mask] = min(dp[mask], {dp[mask^(1<<bit)].f+1, a[bit]});
                }
            }
        }        
    }
    cout<<dp[(1<<n)-1].f;
}
