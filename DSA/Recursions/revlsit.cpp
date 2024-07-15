#include <bits/stdc++.h>

using namespace std;


// funtion to print array 
void printArr(int ans[], int n){
    cout << "The reversed array is: ";
    for (int i = 0; i< n; i++){
        cout << ans[i] << " ";
    }
}

// function to reverse the array

void revarr(int arr[], int n){
    int ans[n];
    for(int i = n -1; i>=0; i--){
        ans[n - i - 1] = arr[i];
    }
    printArr(ans,n);
}

int main(){
    cout << "Enter the number of elements in the array: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i =0; i<n; i++){
        cin >> arr[i];
    }
    revarr(arr,n);
    return 0;
}