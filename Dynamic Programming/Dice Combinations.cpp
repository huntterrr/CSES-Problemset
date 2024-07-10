#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
signed main() {
    int n, m = 1e9+7;
    cin>>n;
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= 6 && i-j>=0; j++){
            dp[i]=(dp[i]+dp[i-j])%m;
        }
    }
    cout<<dp[n];
}
