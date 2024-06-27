/*
    Author: Haciyev Huseyn
*/
#include <bits/stdc++.h>
using namespace std;
 
unordered_map<char, int> mp;
vector<string> res;
int n;
 
void rec(string s){
    if(s.size()==n){
        res.push_back(s);
        return;
    }
    for(auto &it: mp){
        if(it.second){
            mp[it.first]--;
            s.push_back(it.first);
            rec(s);
            s.pop_back();
            mp[it.first]++;
        }
    }
}
 
int main(){
    string s;
    cin>>s;
    n = s.size();
    for(char &ch: s)mp[ch]++;
    rec("");
    cout<<res.size()<<'\n';
    sort(begin(res), end(res));
    for(string &str: res){
        cout<<str<<'\n';
    }
}
