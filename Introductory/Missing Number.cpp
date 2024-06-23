/*
    Author: Haciyev Huseyn
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
signed main() {
    int n;
    cin>>n;
    int sum = (n*(n+1))/2;
    for (int i = 0; i < n-1; i++){
        int a;
        cin>>a;
        sum-=a;
    }
    cout<<sum;
}