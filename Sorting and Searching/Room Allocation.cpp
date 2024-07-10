#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
 
signed main() {
    int n;
    cin>>n;
    set<pair<int, int>> st;
    vector<pair<pair<int, int>, int>> customers(n);
    for (int i = 0; i < n; i++){
        cin>>customers[i].f.f>>customers[i].f.s;
        customers[i].s = i;
    }
 
    sort(customers.begin(), customers.end());
    vector<int> res(n, -1);
    int cnt = 1;
    for (int i = 0; i < n; i++){
        auto it = st.begin();
        if(st.empty() or st.begin()->f>=customers[i].f.f){
            res[customers[i].second] = cnt;
            st.insert({customers[i].f.s, cnt});
            cnt++;
        }else{
            st.erase(it);
            st.insert({customers[i].first.second, it->second});
            res[customers[i].second] = it->second;
        }
    }
 
    cout<<cnt-1<<endl;
    for (int i = 0; i < n; i++){
        cout<<res[i]<<' ';
    }
}