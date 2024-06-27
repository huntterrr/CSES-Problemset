/*
    Author: Haciyev Huseyn
*/
#include <bits/stdc++.h>
using namespace std;
 
vector<string> grid(8, string(8, '.'));
int cnt = 0;
 
bool isSafe(int row, int col){
    int i = row - 1, j = col - 1;
        while (i >= 0 && j >= 0) {
            if (grid[i][j] == 'Q') {
                return false;
            }
            i--;
            j--;
        }
 
        // Check lower diagonal
        i = row - 1;
        j = col + 1;
        while (i >= 0 && j < 8) {
            if (grid[i][j] == 'Q') {
                return false;
            }
            i--;
            j++;
        }
 
        // Check row
        i = row-1;
        j = col;
        while (i >= 0) {
            if (grid[i][j] == 'Q') {
                return false;
            }
            i--;
        }
 
        return true;
}
 
void dfs(int row){
    if(row==8){cnt++;return;}
    for(int col = 0;col<8;col++){
        if(grid[row][col]=='.' and isSafe(row, col)){
            grid[row][col] = 'Q';
            dfs(row+1);
            grid[row][col] = '.';
        }
    }
}
 
int main(){
    for(int i = 0;i<8;i++){    
        for(int j = 0;j<8;j++){
            cin>>grid[i][j];
        }
    }
 
    dfs(0);
    cout<<cnt;
}
 
