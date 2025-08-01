#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }


     int sum;
     cin>>sum;
     int length =0;
     for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int subarray_sum = 0;
            for(int k = i; k <= j; k++){
                subarray_sum += arr[k];
            }
            if(subarray_sum == sum){
                length = max(length, j - i + 1);
            }

        }
     }
     cout << length;
     return 0;
}