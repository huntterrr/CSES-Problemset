#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int r = 0;
    for (int i = 0; i < n; i++){
        if(r+1<a[i]){
            cout<<r+1;
            return 0;
        }
        r+=a[i];
    }
    cout<<r+1;
}
