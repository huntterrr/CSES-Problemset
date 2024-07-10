#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T> 
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
struct triple{
    int f, s, indx;
};
 
bool comparator(triple a, triple b){
    if(a.f==b.f) return a.s > b.s;
    return a.f<b.f;
}
 
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    vector<triple> ranges(n);
    vector<int> contains(n);
    vector<int> contained(n);
    ordered_set<pair<int, int>> st;
    for(int i = 0;i<n;i++){
        cin>>ranges[i].f>>ranges[i].s;
        ranges[i].indx = i;
    }
    sort(ranges.begin(), ranges.end(), comparator);
    for(int i = n-1; i>=0;i--){
        st.insert({ranges[i].s, -1*i});
        contains[ranges[i].indx] = st.order_of_key({ranges[i].s ,-1*i});
    }
    st.clear();
    for(int i = 0; i<n;i++){
        st.insert({ranges[i].s, -1*i});
        contained[ranges[i].indx] = st.size()-st.order_of_key({ranges[i].s,-1*i})-1;
    }
    
    for(int &i: contains) cout<<i<<' ';
    cout<<'\n';
    for(int &i: contained) cout<<i<<' ';
}