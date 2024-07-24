#include <bits/stdc++.h>
using namespace std;


int uniqe(vector<int> &arr){
    int i = 0;
    int n = arr.size();

    for(int j = 1; j< n; j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;

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

    set<int> uniq;

    for(int i =0; i < n; i++){
        uniq.insert(arr[i]);
    }

    // if the given arrays are sorted
    cout << "Number of unique elements are: " << uniqe(arr) << endl;

    cout << "The unique elements of the array are: ";

    for(auto it = uniq.begin(); it != uniq.end(); it++){
        cout << *it << " ";
    }

    return 0;
}