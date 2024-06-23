/*
    Author: Haciyev Huseyn
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
signed main() {
    int n, res = 0;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(i!=0 and a[i-1]>a[i]){
            res+=a[i-1]-a[i];
            a[i] = a[i-1];
        }
    }
    cout<<res;
}
