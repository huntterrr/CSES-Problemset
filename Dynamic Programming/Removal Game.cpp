#include <bits/stdc++.h>
#define int long long
using namespace std;
 
int dp[5000][5000];
vector<int> a;
vector<int> prefix_sum;
 
int f(int i, int j){
    if(dp[i][j]!=-1) return dp[i][j];
    if(i==j) return dp[i][j] = a[i];
    if(i>j) return 0;
 
    return dp[i][j] = max(a[i]+prefix_sum[j+1]-prefix_sum[i+1]-f(i+1, j), a[j]+prefix_sum[j]-prefix_sum[i]-f(i, j-1));
}
 
signed main() {
    int n;
    cin>>n;
    a.resize(n);
    prefix_sum.resize(n+1);
    int pfx = 0;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        pfx+=a[i];
        prefix_sum[i+1] = pfx;
    }
 
    for (int i = n-1; i >= 0; i--){
        for (int j = i; j <= n-1; j++){
            if(i==j){dp[i][j] = a[i]; continue;}
            dp[i][j] = max(a[i]+prefix_sum[j+1]-prefix_sum[i+1]-dp[i+1][j], a[j]+prefix_sum[j]-prefix_sum[i]-dp[i][j-1]);
        }
        
    }
    
 
    cout<<dp[0][n-1];
}