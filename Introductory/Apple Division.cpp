/*
    Author: Haciyev Huseyn
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> a;
 
signed main(){
    int n, res = 0;
    cin>>n;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        res+=a[i];
    }
 
 
    for (int bit = 0; bit < (1<<n); bit++){
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            if(bit & (1<<i)) sum1+=a[i];
            else sum2+=a[i];
        }
        res = min(res, abs(sum2-sum1));
    }
    cout<<res;
    
}
