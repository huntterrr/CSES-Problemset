/*
    Author: Haciyev Huseyn
*/
#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    int n;
    cin>>n;
    for(int mask = 0; mask < (1<<n); mask++){
        int val = mask ^ (mask>>1);
        string s = bitset<32>(val).to_string();
        for(int i = 32-n; i<32;i++){
            cout<<s[i];
        }
        cout<<'\n';
    }
}
