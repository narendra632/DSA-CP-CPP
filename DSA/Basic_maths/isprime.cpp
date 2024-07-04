#include <bits/stdc++.h>

using namespace std; 

bool isprime(int n){
    if(n==1){
        return false;
    }
    for(int i = 2; i<=sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main(){
    int t;
    cout << "Enter the number: ";
    cin >> t;
    if(isprime(t)){
        cout << "The number is prime" << endl;
    }
    else{
        cout << "The number is not prime" << endl;
    }

    return 0;
}