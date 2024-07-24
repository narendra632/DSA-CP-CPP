#include <bits/stdc++.h>
using namespace std;

int missingNum(vector<int> arr){
    int n = arr.size();
    int xor1 = 0;
    int xor2 = 0;

    for(int i = 0; i <n; i++){
        xor1 = xor1^arr[i];
        xor2 = xor2^i;
    }

    xor2 = xor2^n;

    int ifnum = xor1^xor2;

  
    cout << "The missing number is " << ifnum;

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

    missingNum(arr);

}