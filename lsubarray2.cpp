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
int length = 0;
for(int i = 0; i < n; i++){
    int subarray_sum = 0;
    for(int j = i; j < n; j++){
        subarray_sum += arr[j];
        if(subarray_sum == sum){
            length = max(length, j - i + 1);
        }
    }
}
cout << length;
return 0;

}