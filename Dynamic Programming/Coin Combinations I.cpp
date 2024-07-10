#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x, mod = 1e9 + 7;
    cin>>n>>x;
    vector<int>coins(n+1);
    vector<long long>dp(x+1,0);
    for (int i=0;i<n;i++)
        cin>>coins[i];
    dp[0]=1;
    for (int i=1;i<=x;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i-coins[j]>=0)
                dp[i]=(dp[i]+dp[i-coins[j]])%mod;
        }
    }
    cout<<dp[x];
}
