#include <bits/stdc++.h>
#define int long long int
using namespace std;
 
int dp[125251];
int m = 1e9+7;
 
int inv(int a) {
    if(a<=1) return a;
    return m - (m/a) * inv(m % a) % m;
}
 
 
signed main() {
    int n;
    cin>>n;
    int sum = (n*(n+1))/2, half = sum/2;
    if(sum%2==1){cout<<0; return 0;}
    dp[0] = 1;
    for (int i = 1; i <= n; i++){
        for (int j = half; j >= i; j--){
            dp[j] = (dp[j]+dp[j-i])%m;
        }
    }
    cout<<(dp[half]*inv(2))%m;    
}