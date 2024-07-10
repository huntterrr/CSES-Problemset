#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define int long long int
 
signed main() {
    int n;
    cin>>n;
    vector<int> dp(n+1, 1);
    dp[0] = 0;
    for (int i = 10; i <= n; i++){
        int j = i, mini = 1e9;
        while (j!=0){
            int a = j%10;
            j/=10;
            if(i-a<mini) mini = i-a;
        }
        
        dp[i] = dp[mini]+1;
    }
    
 
    cout<<dp[n];
}
