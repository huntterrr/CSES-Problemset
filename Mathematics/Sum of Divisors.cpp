/*
    Author: Haciyev Huseyn
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;

ll poww(int base, int exp){
    if(exp==0) return 1;
    ll res = poww(base, exp/2);
    if(exp%2==1) return (((res*res)%mod)*base)%mod;
    return (res*res)%mod;
}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    ll n;cin>>n;
    ll i = 1, res = 0, j, q;
    while(i<=n){
        q = n/i;
        j = (n/q)+1;
        ll sumtob = (((j)%mod)*(((j-1)%mod))%mod * poww(2, mod-2))%mod;
        ll sumtoamin1 = (((i%mod)*((i-1)%mod))%mod * poww(2, mod-2))%mod; 
        ll temp = (sumtob-sumtoamin1+mod)%mod;
        res = (res+(q%mod)*temp)%mod;
        i = j;
    }
    cout<<res;
}
