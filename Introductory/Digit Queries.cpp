/*
    Author: Haciyev Huseyn
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long q;
    cin>>q;
    while(q--){
        long long n;
        cin>>n;
        long long cnt = 9, len = 1;
        long long digCounter = 0;
        while(true){
            long long digitInThisGroup = len*cnt;
            if(digCounter+digitInThisGroup>=n){
                break;
            }
            digCounter+=digitInThisGroup;
            cnt = cnt*10;
            len++;
        }
        n-=digCounter;
        long long res = (long long)pow(10, len-1)+((n-1)/len);
        string s = to_string(res);
        cout<<s[(n-1)%len]<<'\n';
    }
}
