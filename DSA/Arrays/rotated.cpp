#include <bits/stdc++.h>
using namespace std;

vector<int> rotated(vector<int> &arr, int k){
    int n = arr.size();

    k = k%n;
    
    int temp[k];

    if(k ==0){
        return arr;
    }

    for(int i =0; i<k; i++){
        temp[i] = arr[i];
    }


    for(int i = k; i < n; i++){
        arr[i-k] = arr[i]; 
    }

    for(int i =(n-k); i< n; i++){
        arr[i] = temp[i-(n-k)];
    }
    return arr;

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