#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define f first
#define s second
 
signed main() {
    int n, k, maxValue = 0, res = 1e18;
    cin>>n>>k;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
        maxValue = max(a[i], maxValue);
    }
    int l = maxValue, r = 1e18, m;
    while (l<=r){
        m = l+(r-l)/2;
 
        int sum = 0, blocks = 1;
        for (int i = 0; i < n; i++){
            if(sum+a[i]>m){
                blocks++;
                sum = 0;
            }
            sum += a[i];
        }
 
        if(blocks>k){
            l = m+1;
        }else{
            res = min(res, m);
            r = m-1;
        }
    }
    cout<<res;
}
