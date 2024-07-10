#include <bits/stdc++.h>
using namespace std;
 
signed main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        arr[i] = i+1;
    }
    while (arr.size()>1){
        vector<int> surv;
        for (int i = 0; i < arr.size(); i++){
            if(i%2==1){
                cout<<arr[i]<<' ';
            }else{
                surv.push_back(arr[i]);
            }
        }
        if(arr.size()%2==0){
            arr = surv;
        }else{
            int elem = arr.back();
            surv.pop_back();
            arr.clear();
            arr.push_back(elem);
            for (int it: surv){
                arr.push_back(it);
            }
        }
        
    }
 
    cout<<arr[0];
}
