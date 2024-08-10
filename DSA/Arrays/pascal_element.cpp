#include <bits/stdc++.h>

using namespace std;

int pascalNum(int r, int e){

    //formula is nCr where n is the row number and r is the element numder of that row.

    int ele = 1;

    for(int i = 0; i < e; i++){
        ele = ele * (r-i);
        ele = ele/(i+1);
    }

    cout << ele;

    return 1;
}

int pascalRow(int n){
    int nums = 1;
    cout << nums << " "; 
    for(int i = 1; i < n; i++){
        nums = nums*(n-i);
        nums = nums/i;
        cout << nums << " ";
    }
    return 1;
}

int main(){
    //return pascalNum(4,2);
    return pascalRow(6);
}