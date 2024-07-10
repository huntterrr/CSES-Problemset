#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, q, res = 1;
    cin>>n>>q;
    vector<int> vec(n+1), positionOf(n+1);
    for(int i = 1;i<=n;i++){
        cin>>vec[i];
        positionOf[vec[i]] = i;
    }
    for(int i = 1;i<n;i++){
        res+= (positionOf[i]>positionOf[i+1]);
    }
    int l ,r;
    set<pair<int, int>> st;
    while(q--){
        cin>>l>>r;
        if(vec[l]+1<=n) st.insert({vec[l], vec[l]+1});
        if(vec[l]-1>=1) st.insert({vec[l]-1, vec[l]});
        if(vec[r]+1<=n) st.insert({vec[r], vec[r]+1});
        if(vec[r]+1>=1) st.insert({vec[r]-1, vec[r]});
        for(auto &[x, y]: st){
            res-= positionOf[x]>positionOf[y];
        }
        swap(vec[l], vec[r]);
        positionOf[vec[l]] = l;
        positionOf[vec[r]] = r;
        for(auto &[x, y]: st){
            res+= positionOf[x]>positionOf[y];
        }
        cout<<res<<'\n';
        st.clear();
    }
}
