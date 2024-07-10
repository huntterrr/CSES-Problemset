#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define int long long int
 
signed main() {
    int n, m, mod = 1e9+7;
    cin>>n>>m;
    vector<int> a(n);
    for(int &i: a)cin>>i;
    vector<vector<int>> dp(n, vector<int>(m+1, 0));
    
    if(a[0]==0){
        for (int i = 1; i <= m; i++){
            dp[0][i] = 1;
        }
    }else dp[0][a[0]] = 1;
    
    for (int i = 1; i < n; i++){
        if(a[i]==0){
            for (int j = 1; j <= m; j++){
                dp[i][j] = dp[i-1][j]%mod;
                if(j-1>0) dp[i][j]=(dp[i][j]+dp[i-1][j-1])%mod;
                if(j+1<=m) dp[i][j] = (dp[i][j]+dp[i-1][j+1])%mod;
            }
        }
        else{
            dp[i][a[i]] = dp[i-1][a[i]]%mod;
            if(a[i]-1>0) dp[i][a[i]]=(dp[i][a[i]]+dp[i-1][a[i]-1])%mod;
            if(a[i]+1<=m) dp[i][a[i]]=(dp[i][a[i]]+dp[i-1][a[i]+1])%mod;
        }
    }
    if(a[n-1]==0){
        int res = 0;
        for (int i = 1; i <= m; i++){
            res=(res+dp[n-1][i])%mod;
        }
        cout<<res;
        return 0;
    }
    cout<<dp[n-1][a[n-1]];
}
