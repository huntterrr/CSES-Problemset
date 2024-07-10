#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define f first
#define s second
 
signed main() {
    int n;
    cin>>n;
    vector<pair<int, int>> tasks(n);
    for (int i = 0; i < n; i++){
        cin>>tasks[i].f>>tasks[i].s;
    }
    sort(tasks.begin(), tasks.end());
    int time = 0, res = 0;
    for (int i = 0; i < n; i++){
        time+=tasks[i].f;
        res+=tasks[i].s-time;
    }
    cout<<res;
    return 0;
}
