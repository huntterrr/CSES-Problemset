#include <bits/stdc++.h>
using namespace std;
 
struct triple{
    int f, s, indx;
};
 
bool comparator(triple a, triple b){
    if(a.f==b.f){
        return a.s>b.s;
    }
    return a.f<b.f;
 
}
 
signed main() {
    int n;
    cin>>n;
    vector<int> contains(n, 0);
    vector<int> contained(n, 0);
    vector<triple> range(n);
    for (int i = 0; i < n; i++){
        triple a;
        cin>>a.f>>a.s; a.indx = i;
        range[i] = a;
    }
    sort(range.begin(), range.end(), comparator);
    int maxi = 0;
    for (int i = 0; i < n; i++){
        if(maxi>=range[i].s){
            contained[range[i].indx] = 1;
        }
        maxi = max(maxi, range[i].s);
    }
    
    int mini = 1e9+1;
    for (int i = n-1; i >= 0; i--){
        if(mini<=range[i].s){
            contains[range[i].indx] = 1;
        }
        mini = min(mini, range[i].s);
    }
 
    for (int i = 0; i < n; i++){
        cout<<contains[i]<<' ';
    }
    cout<<endl;
    for (int i = 0; i < n; i++){
        cout<<contained[i]<<' ';
    }    
}
