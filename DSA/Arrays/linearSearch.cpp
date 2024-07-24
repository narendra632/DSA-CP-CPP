#include <bits/stdc++.h>

using namespace std;

int linearSearch(vector<int> &arr, int num){
    int n = arr.size();

    for(int i = 0; i< n; i++){
        if(arr[i] == num){
            cout << "The number is present at index " << i;
        }
        if(i==n-1 && arr[i] != num){
            cout << "The number is not present";
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

    int num;
    cout << "Enter the number you want to search: ";
    cin >> num;
    linearSearch(arr, num);

}