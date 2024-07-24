#include <bits/stdc++.h>

using namespace std;

int unionArray(vector<int> &arr1,vector<int> &arr2){
    
    int s1 = arr1.size();
    int s2 = arr2.size();

    int i = 0;
    int j = 0;

    vector<int> unionA;

    while(i < s1 && j < s2){
        if(arr1[i] < arr2[j]){
            if(unionA.size() == 0 || unionA.back() != arr1[i]){
                unionA.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(unionA.size() == 0 || unionA.back() != arr2[j]){
                unionA.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i < s1){
        if(unionA.size() == 0 || unionA.back() != arr1[i]){
                unionA.push_back(arr1[i]);
            }
            i++;
    }

    while(j < s2){
        if(unionA.size() == 0 || unionA.back() != arr2[j]){
                unionA.push_back(arr2[j]);
            }
            j++;
    }
    

    int s3 = unionA.size();

    cout << "The elements of the arrays after union are: ";

    for(int i = 0; i< s3; i++){
        cout << unionA[i] << " ";
    }
    
    return 0;

}


int main(){
    int s1;
    int s2;

    cout << "Enter the size of 1st array: ";
    cin >> s1;

    cout << "Enter the size of 2nd array: ";
    cin >> s2;

    vector<int> arr1(s1);
    vector<int> arr2(s2);

    cout << "Enter the elements of the 1st array: ";
    for(int i =0; i <s1 ; i++){
        cin >> arr1[i];
    }

    cout << "Enter the elements of the 2nd array: ";
    for(int i =0; i <s2 ; i++){
        cin >> arr2[i];
    }

    unionArray(arr1, arr2);

}