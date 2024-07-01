#include <bits/stdc++.h>

using namespace std;

// void function
// void printname() {
//     cout << "Hello World" << endl;
// }

// int main() {
//     printname();
//     return 0;
// }


// // void function with parameter
// void printname(string name) {
//     cout << "Hello " << name << endl;
// }

// int main() {
//     printname("Narendra"); 

//     string name;

//     cin >> name;
//     printname(name);
    
//     return 0;
// }


// function to add two numbers

int sum(int a, int b) {
    cout << "Sum of " << a << " and " << b << " is " << a + b << endl;
    return 1;
}

int main() {
    int a,b;
    cout << "enter 1st number: ";
    cin >> a;
    cout << "enter 2nd number: ";
    cin >> b;

    sum(a,b);
    return 0;
}