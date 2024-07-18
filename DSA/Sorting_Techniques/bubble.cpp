#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i = n-1; i>=0; i--){
        int didswap = 0;
        for(int j = 0; j <= i -1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didswap++;
            }
        }
        if(didswap == 0){
            break;
        }
    }
    
}


void bubble_recurs(int arr[], int n){
    if(n==1) return;

    for(int j = 0; j <=n -2; j++){
        if(arr[j] > arr[j + 1]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
    }
    bubble_recurs(arr, n-1);
}

int main(){
    int n; 
    cout << "Enter the size of the Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i<n; i++) cin >> arr[i];
    //bubble_sort(arr, n);
    bubble_recurs(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}