#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;
    cin>>n;
    vector<int> indxArr(n+1);
    for (int i = 1; i < n+1; i++){
        int a;
        cin>>a;
        indxArr[a] = i;
    }
    int cnt = 1;
    for (int i = 1; i < n+1; i++){
        if(indxArr[i]<indxArr[i-1]){
            cnt++;
        }
    }
    cout<<cnt;
}