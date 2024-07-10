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
    int l = 0, sum = 0, res = 0;
    for (int r = 0; r < n; r++){
        sum+=a[r];
        while (sum>target){
            sum-=a[l];
            l++;
        }
        if(sum==target) res++;
 
    }
    cout<<res;
}
