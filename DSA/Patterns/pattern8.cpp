#include <bits/stdc++.h>
using namespace std;


// void pattern(int n) {
//     int num =1;
//     for(int i=1; i<=n; i++){
//         for (int j=1; j<=i; j++){
//             cout << num << " ";
//             num = num+1;
//         }
//         cout << endl;
//     }
// }


// void pattern (int n){
//     for(int i=1; i<=n; i++){
//         for(char j='A'; j<'A'+i; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }

// }

// void pattern (int n){
//     for(int i=1; i<=n; i++){
//         for(char j='A'; j<= 'A'+(n-i); j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }

// }

void pattern (int n){
    char ch = 'A';
    for (int i=1; i<=n; i++){
        for (char j=1; j<=i; j++){
            cout << ch << " "; 
        }
        ch = ch+1;
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pattern(n);
    return 0;
}