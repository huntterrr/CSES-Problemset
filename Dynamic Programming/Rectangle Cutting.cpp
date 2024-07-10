#include <bits/stdc++.h>
#define int long long
using namespace std;
#define MAX 501
 
int mod = 1e9+7;
 
int dp[MAX][MAX];
 
signed main() {
    int a, b;
    cin>>a>>b;
    for (int i = 1; i <= a; i++) dp[i][1] = i-1;
    for (int i = 1; i <= b; i++) dp[1][i] = i-1;
 
    for (int i = 2; i <= a; i++){
        for (int j = 2; j <= b; j++){
            int res = INT_MAX;
            if(i==j){dp[i][j]=0; continue;}
            for (int k = 1; k <= i-1; k++){
                res = min(res, dp[k][j]+dp[i-k][j]+1);
            }
            for (int k = 1; k <= j-1; k++){
                res = min(res, dp[i][k]+dp[i][j-k]+1);
            }
            dp[i][j] = res;
        }
    }
 
    cout<<dp[a][b];
}
