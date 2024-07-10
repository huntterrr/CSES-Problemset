#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define f first
#define s second
 
signed main() {
    int n, target;
    cin>>n>>target;
    vector<pair<int, int>> a(n);
 
    for (int i = 0; i < n; i++) {cin>>a[i].f; a[i].s = i;}
    
    sort(a.begin(), a.end());
    
    for (int i = 0; i < n-1; i++){
        int temp = target-a[i].f;
        int l = i+1, r = n-1;
        while (l!=r){
            if(a[l].f+a[r].f==temp){cout<<a[i].s+1<<' '<<a[l].s+1<<' '<<a[r].s+1;return 0;}
            else if(a[l].f+a[r].f>temp) r--;
            else l++;
        }
    }
    cout<<"IMPOSSIBLE";
}