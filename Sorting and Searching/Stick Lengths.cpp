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
    sort(vec.begin(), vec.end());
    int len = vec[n/2], res = 0;
    for (int i = 0; i < n; i++){
        res+=abs(len-vec[i]);
    }
    cout<<res;
}
