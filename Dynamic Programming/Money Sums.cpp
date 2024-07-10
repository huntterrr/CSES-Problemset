#include <bits/stdc++.h>
#define int long long
using namespace std;
 
int const MAXS = 1e5;
int const MAXN = 100;
 
int dp[MAXN+1][MAXS+1];
 
signed main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int &i:a) cin>>i;
    
    dp[0][0] = 1;
 
    for (int i = 1; i <= n; i++){
        for (int sum = 0; sum <= MAXS; sum++){
            dp[i][sum] = dp[i-1][sum];
            if(sum>=a[i-1]) dp[i][sum] = dp[i][sum] or dp[i-1][sum-a[i-1]];
        }
    }
 
    vector<int> res;
    for (int i = 1; i <= MAXS; i++){
        if(dp[n][i]){
            res.push_back(i);
        }
    }
 
    cout<<res.size()<<endl;
    for (int i = 0; i < res.size(); i++){
        cout<<res[i]<<' ';
    }    
}
