#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n;
    cin>>n;
    vector<pair<int, int>> mp;
    for (int i = 0; i < n; i++){
        int a, b;
        cin>>a>>b;
        mp.push_back({b ,a});
    }
    sort(mp.begin(), mp.end());
    int cnt = 0, endingTime = -1;
    for (auto &it: mp){
        if(it.second>=endingTime){
            cnt++;
            endingTime = it.first;
        }
    }
    cout<<cnt;
}
