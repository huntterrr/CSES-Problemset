#include <bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T> 
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i = 0;i<n;i++) cin>>a[i];
    ordered_set<pair<int, int>> window;
    for(int i = 0;i<k;i++){
        window.insert({a[i], i});
    }
    cout<<window.find_by_order((k-1)/2)->first<<' ';
    for(int i = 1; i < n-k+1; i++){
        window.erase({a[i-1], i-1});
        window.insert({a[i+k-1], i+k-1});
        cout << window.find_by_order((k-1)/2)->first<<' ';
    }
    return 0;
}