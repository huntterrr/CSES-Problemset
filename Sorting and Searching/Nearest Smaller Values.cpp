#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define f first
#define s second
 
signed main() {
    int n;
    cin>>n;
    vector<int> a(n), res(n);
    stack<int> stk;
    for (int i = 0; i < n; i++) cin>>a[i];
    
    for (int i = 0; i < n; i++){
        while(!stk.empty() and a[stk.top()]>=a[i]){
            stk.pop();
        }
        if(stk.empty()) res[i] = -1;
        else if(a[stk.top()]<a[i]) res[i] = stk.top(); 
        stk.push(i);
    }
    for (int i = 0; i < n; i++){
        cout<<res[i]+1<<' ';
    }
    
}