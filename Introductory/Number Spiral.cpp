#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long int
 
void _(){
    int i, j;cin>>i>>j;
    if(i>=j){
        if(i%2==0){
            cout<<(i-1)*(i-1)+i+(i-j);
        }else{
            cout<<(i-1)*(i-1)+j;
        }
    }else{
        if(j%2==0){
            cout<<(j-1)*(j-1)+i;
        }else{
            cout<<(j-1)*(j-1)+j+(j-i);
        }
    }
    cout<<'\n';
}
 
signed main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--){
        _();
    }
}