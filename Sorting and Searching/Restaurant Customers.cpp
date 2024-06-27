/*
    Author: Haciyev Huseyn
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n, maxi = -1, sum = 0;
    cin>>n;
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        int a, b;
        cin>>a>>b;
        mp[a]++;
        mp[b+1]--;
    }
    for (auto it: mp){
        sum+=it.second;
        maxi = max(maxi, sum);
    }
    cout<<maxi;
}
