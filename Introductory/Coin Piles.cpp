/*
    Author: Haciyev Huseyn
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        if(a>b) swap(a, b);
        cout<<((a+b)%3==0 and a*2>=b ? "YES" : "NO")<<'\n';
    }
}
