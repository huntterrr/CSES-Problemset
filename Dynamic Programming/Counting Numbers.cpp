#include <bits/stdc++.h>
#define int long long int
using namespace std;
 
// int inv(int a) {
//     if(a<=1) return a;
//     return m - (m/a) * inv(m % a) % m;
// }
 
int dp[19];
 
 
int solve(int n){
    if(n==0) return 1;
    if(n<0) return 0;
    string sNum = to_string(n);
    int m = sNum.length();
    int prev = 0, res = 0;
    for (int i = 0; i < m; i++){
        res+=dp[i];
    }
    
    for (int i = 0; i < m; i++){
        int digit = sNum[i] - '0', diff = m-i-1;
        if(prev<digit){
            if(digit!=0) res+=(digit-1)*dp[diff];
        }else{
            res+=digit*dp[diff];
        }
        if(prev==digit) return res;
        prev = digit;
    }
 
    return res+1;
}
 
 
signed main() {
    int a, b;
    cin>>a>>b;
    int res = 1;
    dp[0] = 1;
    for (int i = 1; i < 19; i++){
        res*=9;
        dp[i] = res;
    }
 
    cout<<solve(b)-solve(a-1);
    
}
