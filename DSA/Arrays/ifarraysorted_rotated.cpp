#include <bits/stdc++.h>

using namespace std;

int sortRotate(vector<int> &arr, int n){

    int count = 0;
    for(int i =0; i< n; i++){
        if(arr[i] > arr[(i+1) % n]){
            count++;
        }
    }
    if(count <= 1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    vector<int> arr(n);

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";

    for(int i =0; i <n ; i++){
        cin >> arr[i];
    }

    return sortRotate(arr, n);
}