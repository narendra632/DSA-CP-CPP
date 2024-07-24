#include <bits/stdc++.h>
using namespace std;

int rotateone(vector<int> &arr){
    int temp = arr[0];
    int n = arr.size();

    for(int i = 1 ; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;

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

    rotateone(arr);

    cout << "Array after one rotating will be : ";

    for(int i =0; i <n ; i++){
        cout << arr[i] << " ";
    }
}