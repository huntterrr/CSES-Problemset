/*
    Author: Haciyev Huseyn
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, front="", back ="", center = "";
    cin>>s;
    unordered_map<char, int> mp;
    for(char &ch: s){
        mp[ch]++;
    }
    if(s.size()%2==0){
        for(auto it: mp){
            if(it.second%2==1){
                cout<<"NO SOLUTION";
                return 0;
            }
            for(int i = 0;i < it.second/2;i++){
                front.push_back(it.first);
                back.push_back(it.first);
            }
        }
        reverse(begin(back), end(back));
        cout<<front<<back;
        return 0;
    }
    int cnt = 1;
    for(auto it: mp){
        if(it.second%2==1){
            if(cnt){
                cnt = 0;
                for(int i = 0;i<it.second;i++){
                    center.push_back(it.first);
                }
                continue;
            }else{cout<<"NO SOLUTION"; return 0;}
        }
        for(int i = 0;i < it.second/2;i++){
            front.push_back(it.first);
            back.push_back(it.first);
        }
    }
    if(cnt) {cout<<"NO SOLUTION"; return 0;}
    reverse(begin(back), end(back));
    cout<<front<<center<<back;
}
