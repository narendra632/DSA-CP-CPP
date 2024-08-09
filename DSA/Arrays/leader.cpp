#include <bits/stdc++.h>

using namespace std;

int leader(vector<int>arr){
    int n = arr.size();
    int maxi = INT_MIN;

    vector<int>leaderA;

    for(int i = n-1; i >=0; i--){
        if(arr[i]>maxi){
            maxi = arr[i];
            leaderA.push_back(maxi);
        }
    }
    
    for(int i = 0; i < leaderA.size();i++){
        cout << leaderA[i] << " ";
    }
    return 1;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    
    vector<int> arr(n);

    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }

    leader(arr);
    
    return 1;
}