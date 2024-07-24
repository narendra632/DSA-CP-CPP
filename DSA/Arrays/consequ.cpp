#include <bits/stdc++.h>
using namespace std;

int conseq(vector<int> arr){
    int count = 0;
    int maxi = 0;
    int n = arr.size();

    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            count++;
            maxi = max(maxi,count);
        }
        else{
            count = 0;
        }
    }
    cout << "The maximum occurance of the number is " << maxi;
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

    conseq(arr);

}