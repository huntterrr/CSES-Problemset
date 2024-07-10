#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define int long long int
 
signed main() {
    int n, x;
    cin>>n>>x;
    vector<int> price(n), page(n);
    vector<int> curr(x+1, 0);
    vector<int> prevv(x+1, 0);
    for(int&i: price) cin>>i;
    for(int&i: page) cin>>i;
    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= x; j++){
            curr[j] = prevv[j];
            if(j>=price[i-1]) curr[j] = max(curr[j], page[i-1]+prevv[j-price[i-1]]);
        }      
        prevv = curr;  
    }
    cout<<prevv[x];
}