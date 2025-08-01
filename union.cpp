#include<bits/stdc++.h>
using namespace std;


vector <int> sortedArray(vector <int> n1, vector <int> n2) {
    set<int>st;
    for(int i=0;i<n1.size();i++){
        st.insert(n1[i]);
    }
    for(int i=0;i<n2.size();i++){
        st.insert(n2[i]);
    }
    vector <int> temp;
    for(auto it=st.begin();it!=st.end();it++){
        temp.push_back(*it);
    }
    return temp;
}




int main(){
    int n1;
    cin >> n1;
    int n2;
    cin >> n2;
    int arr[n1];
    int arr2[n2];
    for(int i = 0; i < n1; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n2; i++){
        cin>>arr2[i];
    }
    vector <int> v1(arr,arr+n1);
    vector <int> v2(arr2,arr2+n2);
    vector <int> v3 = sortedArray(v1,v2);
    for(int i = 0; i < v3.size(); i++){
        cout<<v3[i]<<" ";
        }
        return 0;
}