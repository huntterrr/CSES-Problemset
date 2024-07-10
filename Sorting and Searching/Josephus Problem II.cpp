#include <bits/stdc++.h>
using namespace std;
// #define int long long int
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
 
void _(){
    int n, k;cin>>n>>k;
    ordered_set<int> st;
    for(int i = 1;i<=n;i++){
        st.insert(i);
    }
    int i = k%n;
    while (n--){
        auto it = st.find_by_order(i);
        cout<<*it<<' ';
        st.erase(it);
        if(n) i = (i+k)%n;
    }
}
 
 
signed main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    while (t--) {
        _();
    }
    return 0;
}