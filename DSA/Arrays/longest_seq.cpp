#include <bits/stdc++.h>

using namespace std;

int lgt_seq(vector<int>arr,int n){

    sort(arr.begin(), arr.end());

    int count = 0; 
    int last_small = INT_MIN;
    int longest = 1;
  
    for(int i = 0; i < n; i++){
        if(arr[i]-1 == last_small){
            count += 1;
            last_small = arr[i];
        }
        else if(last_small != arr[i]){
            count = 1;
            last_small = arr[i];
        }
        longest = max(longest, count);
    }
    cout << "longest sequence is: " << longest;

    return 0;
    
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

    lgt_seq(arr,n);
    
    return 1;
}