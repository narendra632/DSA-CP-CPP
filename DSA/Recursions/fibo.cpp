#include <bits/stdc++.h>

using namespace std;

int fibo(int n){
    if (n<=1) return n;
    return fibo(n-1) + fibo(n-2);
}

int main(){
    cout << "Enter a number: ";
    int n;
    cin >> n;
    cout << "The " << n << "th fibonacci number is: " << fibo(n) << endl;
    return 0;
}