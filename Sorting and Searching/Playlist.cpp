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
    set<int> st;
    int l = 0, res = 0;
    for (int r = 0; r < n; r++){
        while (st.count(a[r])){
            st.erase(a[l]);
            l++;
        }
        st.insert(a[r]);
        res = max(res, r-l+1);
    }   
    cout<<res;
}