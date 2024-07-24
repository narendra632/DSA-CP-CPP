#include <bits/stdc++.h>
using namespace std;

int conseq(vector<int> arr){
    int n = arr.size();
    map<int,int> mapp;

    for(int i =0; i<n; i++){
        mapp[arr[i]]++;
    }

    for(auto it = mapp.begin(); it != mapp.end(); it++){
        if(it->second == 1){
            cout << "The single number is: " << it->first;
        }
    }
    return 0;
}

int useXor(vector<int> arr){
    int n = arr.size();
    int xorr = 0;

    for(int i = 0; i< n; i++){
        xorr = xorr ^ arr[i];
    }
    cout << "The single number is " << xorr;
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

    //conseq(arr);
    useXor(arr);

}