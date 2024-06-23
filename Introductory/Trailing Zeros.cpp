/*
	Author: Haciyev Huseyn
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main(){
    int n;cin>>n;
    int res = 0;
    int p5 = 5;
    while(p5<=n){
        res+=(n/p5);
        p5*=5;
    }
    cout<<res;
}
