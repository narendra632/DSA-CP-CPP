#include <bits/stdc++.h>

using namespace std;

int replaceZero(vector<int> &arr){
    int n = arr.size();

    int j = -1;

    for(int i = 0; i<n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    if(j == -1){
        return 0;
    }

    for(int i = j+1; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
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

    replaceZero(arr);

    cout << "The elements of the array after replacing zeros are: ";

    for(int i =0; i< n; i++){
        cout << arr[i] << " ";
    }

}