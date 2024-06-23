/*
	Author: Haciyev Huseyn
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main(){  
    int n, mod = 1e9+7;cin>>n;
    vector<int> a(n+1, 1);
    for(int i = 1;i<=n;i++){
        a[i] = (a[i-1]*2)%mod;
    }
    cout<<a[n];
}
