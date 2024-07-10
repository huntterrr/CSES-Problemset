#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n;
    cin>>n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++){
        cin>>vec[i];
    }
    int res = vec[0], sum = vec[0];
    for (int i = 1; i < n; i++){
        sum = max(sum+vec[i], vec[i]);
        res = max(res, sum);
    }
    cout<<res;
}
