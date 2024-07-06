#include <bits/stdc++.h>

using namespace std;

void req(int n){
    if (n == 0) return;
    cout<<"Hello World" << endl;
    n--;
    req(n);
}


void fun(int n){
    if (n == 0) return;
    cout << n << endl;
    fun(n-1);
    cout << n << endl;
}

void fun3(int n){
    if ( n == 0) return;
    cout << n << endl;
    n--;
    fun3(n);
}


int fun4(int n) {
    if (n == 0){
        return 0;
    }
    return n + fun4(n-1);
}

int fun5(int n) {
    if (n == 0){
        return 1;
    }
    return n * fun4(n-1);

}

int main(){
    cout << "Enter a number: ";
    int n;
    cin >> n;
    req(n);
    cout << "Printing numbers from 1 to " << n << " using recursion" << endl;   
    fun(n);
    cout << "Printing numbers from " << n << " to 1 using recursion" << endl;
    fun3(n);
    cout << "Sum of numbers till "<< n << ":" << fun4(n) << endl;
    cout << "Factorial of " << n << " is: " << fun5(n) << endl;
    return 0;
}

