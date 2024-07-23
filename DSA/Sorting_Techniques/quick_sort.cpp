#include<bits/stdc++.h>
#include <algorithm>
using namespace std;



void qsort(vector<int> &arr, int low, int high);
int partition(vector<int> &arr, int low, int high);

void quick_sort(vector<int> &arr){
    qsort(arr, 0, arr.size() - 1);
}

void qsort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        qsort(arr, low, pIndex - 1);
        qsort(arr, pIndex + 1, high);
    }
}

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= pivot && i < high){
            i++;
        }
        while(arr[j] > pivot && j > low){
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

int main(){
    int n; 
    cout << "Enter the size of the Array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i<n; i++) cin >> arr[i];
    quick_sort(arr);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}