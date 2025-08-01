#include<bits/stdc++.h>
using namespace std;


vector <int> sortedArray(vector <int> n1, vector <int> n2) {
    set <int> st;
    if(n1.size()>n2.size()){
    for (int i = 0; i < n1.size(); i++) {
        for( int j = 0; j < n2.size(); j++) {
            if (n1[i] == n2[j]) {
                st.insert(n1[i]);
        }
    }
}
}else{
    for (int i = 0; i < n2.size(); i++) {
        for( int j = 0; j < n1.size(); j++) {
            if (n2[i] == n1[j]) {
                st.insert(n2[i]);
            }
        }
    }
}
vector <int> ans;
for (auto it = st.begin(); it != st.end(); it++) {
    ans.push_back(*it);

}

return ans;
}



int main(){
       int size1, size2;
    cin >> size1 >> size2;

    vector<int> arr1(size1), arr2(size2);

    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    

    vector<int> result = sortedArray(arr1, arr2);

    for (int val : result) {
        cout << val << " ";
    }

    return 0;

}