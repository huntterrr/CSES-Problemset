/*
    Author: Haciyev Huseyn
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
signed main() {
    int res = 0, curr = 1;
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); i++){
        if(s[i]!=s[i-1]){
            res = max(res, curr);
            curr = 0;
        }
        curr++;
    }
    res = max(res, curr);
    cout<<res;
}
