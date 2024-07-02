#include <bits/stdc++.h>
using namespace std;


// void pattern(int n) {
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=i; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }


// int main() {
//     int t;
//     cout << "Enter the number of test cases: ";
//     cin >> t;
//     pattern(t);
//     return 0;
// }

// void pattern(int n) {
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=i; j++) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }


// int main() {
//     int t;
//     cout << "Enter the number of test cases: ";
//     cin >> t;
//     pattern(t);
//     return 0;
// }


void pattern(int n) {
    for(int i = 1; i<=n; i++) {
        for(int j=1; j<=i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    pattern(t);
}