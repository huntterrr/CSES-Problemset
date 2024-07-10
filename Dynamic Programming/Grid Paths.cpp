#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define int long long int
 
signed main() {
    int n, mod = 1e9+7;
    cin>>n;
    vector<vector<int>> dp(n, vector<int>(n, 0));
    dp[0][0] = 1;
    vector<vector<char>> grid(n, vector<char>(n));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin>>grid[i][j];
        }
    }
    if(grid[0][0]=='*'){cout<<0; return 0;}
    for (int i = 1; i < n; i++){
        if(grid[0][i]=='.') dp[0][i] = dp[0][i-1];
        if(grid[i][0]=='.') dp[i][0] = dp[i-1][0];
    }
    
    for (int i = 1; i < n; i++){
        for (int j = 1; j < n; j++){
            if(grid[i][j]=='.') dp[i][j] = (dp[i][j-1]+dp[i-1][j])%mod;
        }
    }
    cout<<dp[n-1][n-1];
}
