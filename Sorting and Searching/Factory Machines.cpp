#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define f first
#define s second
 
signed main() {
    int n, t;
    cin>>n>>t;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
 
    int l = 0, r = 1e18, m, res = 1e18;
    while (l<=r){
        m = (l+r)/2;
        int products = 0;
        for (int i = 0; i < n; i++){
            products+=m/a[i], (int)1e9;
            if(products>=t){
                break;
            }
        }
        if(products>=t){
            if(m<res) res = m;
            r = m-1;
        }else l = m+1;
    }
    cout<<res;
}
