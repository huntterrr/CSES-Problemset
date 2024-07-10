#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define f first
#define s second
 
signed main() {
    int n, target;
    cin>>n>>target;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin>>a[i];
 
    map<int, pair<int, int>> sums;
 
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if(sums.count(target-a[i]-a[j])){
                cout<<sums[target-a[i]-a[j]].s+1<<' '<<sums[target-a[i]-a[j]].f+1<<' '<<i+1<<' '<<j+1;
                return 0;
            }
        }
        for (int k = 0; k < i; k++){
            sums[a[i]+a[k]] = {k, i};
        }
    }
    cout<<"IMPOSSIBLE";
}