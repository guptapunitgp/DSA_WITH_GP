#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int largest = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
    }


    int slargest = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] > slargest && arr[i] != largest){
            slargest = arr[i];
        }
        cout<<slargest<<endl;
    }
}
return 0;
}