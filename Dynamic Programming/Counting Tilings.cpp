#include <bits/stdc++.h>
#define int long long int
using namespace std;
 
int n, m, mod = 1e9+7;
int dp[1002][1025];
 
void generate_next_masks(int current_mask, int next_mask, int row, vector<int> &next_masks){
    if(row==n+1){next_masks.push_back(next_mask); return;}
 
    if((current_mask & (1<<row)) != 0){
        generate_next_masks(current_mask, next_mask, row+1, next_masks);
    }
    if(row!=n){
        if((current_mask&(1<<(row+1)))==0 and (current_mask&(1<<row))==0){
            generate_next_masks(current_mask, next_mask, row+2, next_masks);
        }
    }
    if((current_mask & (1<<row))==0){
        generate_next_masks(current_mask, next_mask+(1<<row), row+1, next_masks);
    }
}
 
int f(int col, int mask){
    if(col==m+1) return mask==0;
    if(dp[col][mask]!=-1) return dp[col][mask];
 
    int res = 0;
    vector<int> next_masks;
    generate_next_masks(mask, 0, 1, next_masks);
 
    for (int next_mask: next_masks){
        res = (res+f(col+1, next_mask))%mod;
    }
    
    return dp[col][mask] = res;
}
 
signed main() {
    cin>>n>>m;
    memset(dp, -1, sizeof(dp));
    cout<<f(1, 0);
}