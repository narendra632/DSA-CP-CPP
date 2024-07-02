#include <bits/stdc++.h>
using namespace std;


void pattern0(int n) {
    for (int i = 1; i <=n; i++){
        for (int j = i; j<=n-1; j++){
            cout << " ";
        }
        for (int k = 1; k<=2*i-1; k++){
            cout << "*";
        }
        for (int l = i; l<=n-1; l++){
            cout << " ";
        }
        cout << endl;
    }

}



void pattern(int n) {
    for (int i = 1; i <=n; i++){
        for (int j = 1; j<=i-1; j++){
            cout << " ";
        }
        for (int k = i; k<=2*n-i; k++){
            cout << "*";
        }
        for (int l = 1; l<=i-1; l++){
            cout << " ";
        }
        cout << endl;
    }

}


int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pattern0(n);
    pattern(n);
    return 0;
}