#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i = 0;i<n;i++) cin>>a[i];
    if(k==1){
        for(int i = 0; i<n; i++) cout<<0<<' ';
        return 0;
    }
    if(k==2){
        for(int i = 0; i < n-1; i++) cout<<abs(a[i]-a[i+1])<<' ';
        return 0;
    }
    int leftSum = 0, rightSum = 0;
    set<pair<int, int>> left, right;
    vector<pair<int, int>> temp(k);
    for(int i = 0;i<k;i++) temp[i] = {a[i], i};
    sort(begin(temp), end(temp));
    for(int i = 0; i < k/2 + (k%2); i++){left.insert(temp[i]);leftSum+=temp[i].first;}
    for(int i = k/2 + (k%2); i<k;i++){right.insert(temp[i]);rightSum+=temp[i].first;}
    int median = left.rbegin()->first;
    cout<< median*left.size() - leftSum + rightSum - median*right.size()<<' ';
    for(int i = 1;i<n-k+1;i++){
        if(left.count({a[i-1], i-1})){
            leftSum-=a[i-1];
            left.erase({a[i-1], i-1});
        }
        else{
            rightSum-=a[i-1];
            right.erase({a[i-1], i-1});
        }
        if(left.rbegin()->first<a[i+k-1]){
            rightSum+=a[i+k-1];
            right.insert({a[i+k-1], i+k-1});
        }
        else{
            leftSum+=a[i+k-1];
            left.insert({a[i+k-1], i+k-1});
        }
        while (left.size()<k/2+(k%2)){
            pair<int, int> temp = *(right.begin());
            right.erase(temp);
            rightSum-=temp.first;
            leftSum+=temp.first;
            left.insert(temp);
        }
        while (left.size()>k/2+(k%2)){
            pair<int, int> temp = *(left.rbegin());
            left.erase(temp);
            leftSum-=temp.first;
            rightSum+=temp.first;
            right.insert(temp);
        }
        int median = left.rbegin()->first;
        cout<<median*left.size()-leftSum + rightSum-median*right.size()<<' ';
    }
}