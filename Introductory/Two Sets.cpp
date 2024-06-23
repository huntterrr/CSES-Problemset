/*
	Author: Haciyev Huseyn
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main(){
    int n;cin>>n;
    int sum = (n*(n+1))/2;
    if(sum%2!=0){
        cout<<"NO";
    }else{
        cout<<"YES"<<'\n';
        set<int> s1, s2;
        int target = sum/2;
        int t = n;
        for(int i = 1;i<=n;i++) s1.insert(i);
        while(!s1.count(target)){
            target-=t;
            s2.insert(t);
            s1.erase(t);
            t--;
        }
        s1.erase(target);
        s2.insert(target);
        cout<<s1.size()<<'\n';
        for(auto &it: s1) cout<<it<<' ';
        cout<<'\n'<<s2.size()<<'\n';
        for(auto &it: s2) cout<<it<<' ';
    }
}
