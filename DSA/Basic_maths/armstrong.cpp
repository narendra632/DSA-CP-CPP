#include <bits/stdc++.h>

using namespace std;

int armstrong(int n){
    int sum = 0;
    int temp = n;

    while(n>0){
        int last = n%10;
        sum = sum + last*last*last;
        n = n/10;
    }

    if(sum == temp){
        cout << "The number is an armstrong number" << endl;
    }
    else{
        cout << "The number is not an armstrong number" << endl;
    }
    return 0;
}


int main(){
    int t;
    cout << "Enter the number: ";
    cin >> t;
    armstrong(t);

    return 0;
}
