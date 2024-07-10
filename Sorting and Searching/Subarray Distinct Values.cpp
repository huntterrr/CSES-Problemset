#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define f first
#define s second
 
signed main() {
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin>>a[i];
    map<int, int> mp;
    int l = 0, cnt = 0;
    for (int r = 0; r < n; r++){
        mp[a[r]]++;
        while (mp.size()>k){
            mp[a[l]]--;
            if(mp[a[l]]==0) mp.erase(a[l]);
            l++;
        }
        cnt+=r-l+1;
    }
    cout<<cnt;
}
