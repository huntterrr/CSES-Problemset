#include <bits/stdc++.h>
using namespace std;
 
int m = 8388608;
 
int firstGreater(int n){
 
}
 
signed main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
 
    vector<int> temp;
    for (int i = 0; i < n; i++){
        if(temp.empty() or temp.back()<=a[i]){
            temp.push_back(a[i]);
        }else{
            auto it = upper_bound(temp.begin(), temp.end(), a[i]);
            *it = a[i];
        }
    }
    cout<<temp.size();
}
