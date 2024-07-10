#include <bits/stdc++.h>
#define int long long int
using namespace std;
 
signed main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i: a)cin>>i;
    vector<int> arr;
 
    for (int i = 0; i < n; i++){
        if(arr.empty() or arr.back()<a[i])arr.push_back(a[i]);
        else{
            int index = lower_bound(arr.begin(), arr.end(), a[i])-arr.begin();
            arr[index] = a[i];
        }
    }
    cout<<arr.size();
}
