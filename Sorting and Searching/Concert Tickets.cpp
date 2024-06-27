/*
    Author: Haciyev Huseyn
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n, m;
    cin>>n>>m;
    multiset<int> price;
 
    for (int i = 0; i < n; i++){
        int a;
        cin>>a;
        price.insert(a);
    }
    for (int i = 0; i < m; i++){
        int a;
        cin>>a;
        auto it = price.upper_bound(a);
        if(it==price.begin()){
            cout<<-1<<endl;
        }else{
            --it;
            cout<<*it<<endl;
            price.erase(it);
        }
    }
}
