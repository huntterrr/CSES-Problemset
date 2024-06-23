/*
    Author: Haciyev Huseyn
*/
#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define int long long int
 
signed main() {
    int n;
    cin>>n;
    if(n==1) cout<<1;
    if(n<4){cout<<"NO SOLUTION"; return 0;}
    if(n==4){cout<<"2 4 1 3"; return 0;}
    for (int i = n; i >= 1; i-=2){
        cout<<i<<' ';
    }
    for (int i = n-1; i >= 1; i-=2){
        cout<<i<<' ';
    }
}
