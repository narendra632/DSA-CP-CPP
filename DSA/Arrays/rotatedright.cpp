#include <bits/stdc++.h>
using namespace std;

int rotated(vector<int> &arr, int k){
    int n = arr.size();

    k = k%n;

    if(k ==0){
        return 0;
    }

    vector<int> temp(arr.end()-k, arr.end());

    for(int i = n-1; i >= k; i--){
        arr[i] = arr[i-k]; 
    }

    for(int i =0; i<k; i++){
        arr[i] = temp[i];
    }
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
    cout << "Enter the number of rotations you want to do: ";
    cin >> k;

    rotated(arr,k);

    cout << "Array after " << k <<" rotating will be : ";

    for(int i =0; i <n ; i++){
        cout << arr[i] << " ";
    }
}