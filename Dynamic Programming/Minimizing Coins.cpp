#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define int long long int
 
signed main() {
    int n, x;
    cin>>n>>x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin>>a[i];
    vector<int> dp(x+1, INT_MAX);
    dp[0] = 0;
 
    for (int i = 1; i <= x; i++){
        for (auto weight: a){
            if(i-weight>=0) dp[i] = min(dp[i], dp[i-weight]+1);
        }
    }
    if(dp[x]==INT_MAX){cout<<-1;return 0;}
    cout<<dp[x];
}