#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1;
    cin >> n1;
    int arr1[n1];
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }

    int n2;
    cin >> n2;
    int arr2[n2];
    for(int i = 0; i < n2; i++){
        cin >> arr2[i];
    }
 
    int arr3[n1 + n2];
    for(int i = 0; i < n1 + n2; i++){
        if(i < n1){
            arr3[i] = arr1[i];
                }
    }
    for(int i = 0; i < n2; i++){
        arr3[n1 + i] = arr2[i];
    }
    int sum =0;
    for(int i = 0; i < n1 + n2; i++){
        sum = sum + arr3[i];

    }

    int p = n1 +n2;
    double median = sum/p;
    cout << median;
    return 0;
}