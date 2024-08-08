#include <bits/stdc++.h>

using namespace std;

int longestSubarrayWithSumK(vector<int> arr, int k){
    map<int,int> preSumMap;
    int sum = 0;
    int maxLen = 0;
    for(int i =0; i < arr.size(); i++){
        sum = sum + arr[i];
        if(sum == k){
            maxLen = max(maxLen,i+1);
        }
        int rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(maxLen,len);
        }
        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum] = i; 
        }
    }
    cout << "The maximum subarray with sum " << k << " is:" << maxLen;
    return 0;
}


int main(){
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the array: ";

    for(int i =0; i <n ; i++){
        cin >> arr[i];
    }

    int k;
    cout << "Enter the value of sum k:";
    cin >> k;


    longestSubarrayWithSumK(arr,k);

}