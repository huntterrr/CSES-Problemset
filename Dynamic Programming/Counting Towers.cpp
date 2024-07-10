#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define int long long int
 
int const nmax = 1e6;
int const mod = 1e9+7;
 
 
signed main() {
    vector<vector<int>> dp(nmax, vector<int>(8));
    
    for (int i = 0; i < 8; i++){
        dp[0][i] = 1;
    }
    
    for (int i = 1; i < nmax; i++){
        for (int j = 0; j < 8; j++){
            if(j==0 or j==2 or j==3 or j==4 or j==5){
                dp[i][j] = (dp[i-1][0]+
                            dp[i-1][1]+
                            dp[i-1][3]+
                            dp[i-1][4]+
                            dp[i-1][5])%mod;
            }else{
                dp[i][j] = (dp[i-1][2]+
                            dp[i-1][6]+
                            dp[i-1][7])%mod;
            }
        }
    }
    
    int t, n;
    cin>>t;
    
    while (t--){
        cin>>n;
        cout<<(dp[n-1][2]+dp[n-1][6])%mod<<endl;
    }
}
