/*
    Author: Haciyev Huseyn
*/
#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long int
 
void _(){
    int n;cin>>n;
    for(int i = 1;i<=n;i++){
        int x = i*i;
        cout<<(x*(x-1))/2 - 4*(i-1)*(i-2)<<'\n';
    }
}
 
signed main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        _();
    }
}
