/*
    Author: Haciyev Huseyn
*/
#include <bits/stdc++.h>
using namespace std;
 
string s;
 
int path[7][7];
 
bool check(int i, int j){
    return !(i<0 or i>=7 or j<0 or j>=7 or path[i][j]);
}
 
int f(int i, int j, int cnt){
    if(!check(i+1, j) and !check(i-1, j) and check(i, j+1) and check(i, j-1)) return 0;
    if(check(i+1, j) and check(i-1, j) and !check(i, j+1) and !check(i, j-1)) return 0;
    if(!check(i+1, j) and !check(i, j+1) and check(i+1, j+1)) return 0;
    if(!check(i+1, j) and !check(i, j-1) and check(i+1, j-1)) return 0;
    if(!check(i-1, j) and !check(i, j-1) and check(i-1, j-1)) return 0;
    if(!check(i-1, j) and !check(i, j+1) and check(i-1, j+1)) return 0;
    
    if(i == 6 && j == 0){
		if(cnt == 48) return 1;
		else return 0;
	}
	
	if(cnt == 48) return 0;
 
    int res = 0;
    path[i][j] = 1;
    if((s[cnt]=='?' or s[cnt]=='R') and check(i, j+1)){
        res += f(i, j+1, cnt+1);
    }
    if((s[cnt]=='?' or s[cnt]=='L') and check(i, j-1)){
        res += f(i, j-1, cnt+1);
    }
    if((s[cnt]=='?' or s[cnt]=='U') and check(i-1, j)){
        res += f(i-1, j, cnt+1);
    }
    if((s[cnt]=='?' or s[cnt]=='D' )and check(i+1, j)){
        res += f(i+1, j, cnt+1);
    }
 
    path[i][j] = 0;
    
    return res;
}
 
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>s;
    cout<<f(0, 0, 0);
}