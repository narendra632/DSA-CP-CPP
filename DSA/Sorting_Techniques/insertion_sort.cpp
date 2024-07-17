#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i=0; i <=n-1; i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}


int main(){
    int n; 
    cout << "Enter the size of the Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i<n; i++) cin >> arr[i];
    insertion_sort(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}