#include <bits/stdc++.h>

using namespace std;

// // program that tell you are an adult or not

// int main() {
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;
    
//     if(age > 18) {
//         cout << "You are an adult";
//     }
//     else if (age = 18)
//     {
//         cout << "Congratulations! You are an adult now";
//     }
//     else {
//         cout << "You are not an adult";
//     }
    
// }

// to get marks 

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90 && marks <= 100) {
        cout << "Grade A";
    }
    else if (marks >= 80) {
        cout << "Grade B";
    }
    else if (marks >= 70) {
        cout << "Grade C";
    }
    else if (marks >= 60) {
        cout << "Grade D";
    }
    else if (marks >= 40) {
        cout << "Grade E";
    }
    else if (marks < 0 || marks > 100) {
        cout << "Invalid marks";
    }
    else {
        cout << "Grade F";
    }
}