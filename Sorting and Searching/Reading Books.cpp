#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define f first
#define s second
 
signed main() {
    int n, sum = 0, maxElem = -1;
    cin>>n;
    vector<int> tasks(n);
    for (int i = 0; i < n; i++){
        cin>>tasks[i];
        sum+=tasks[i];
        maxElem = max(maxElem, tasks[i]);
    }
    cout<<max(2*maxElem, sum);
}
