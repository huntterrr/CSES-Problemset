/*
    Author: Haciyev Huseyn
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n, x;
    cin>>n>>x;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int l = 0, r = n-1, cnt = 0;
    while (l<=r){
        if(a[r]+a[l]<=x){
            l++;
            r--;
        }else{
            r--;
        }
        cnt++;
    }
    cout<<cnt;
}
