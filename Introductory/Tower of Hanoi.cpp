/*
    Author: Haciyev Huseyn
*/
#include <bits/stdc++.h>
using namespace std;
 
vector<pair<int, int>> sol;
 
void rec(int n, int from, int to, int with){
    if(n==0) return;
    rec(n-1, from, with, to);
    sol.push_back({from, to});
    rec(n-1, with, to, from);
}
 
int main(){
    int n;
    cin>>n;
    rec(n, 1, 3, 2);
    cout<<sol.size()<<'\n';
    for(auto &it: sol){
        cout<<it.first<<' '<<it.second<<'\n';
    }
}
