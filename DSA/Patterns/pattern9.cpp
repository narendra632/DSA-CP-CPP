#include <bits/stdc++.h>
using namespace std;


void pattern(int n) {
    for (int i = 1; i <=n; i++){
        // spaces
        for (int j = 1; j <= n-i; j++){
            cout << " ";
        }

        // characters
        char ch = 'A';
        int breakpoint = (2*i-1)/2;
        for (int j = 1; j <= 2*i-1; j++){
            if(j <= breakpoint){
                cout << ch;
                ch = ch+1;
            } else {
                cout << ch;
                ch = ch-1;
            }
        }

        // spaces
        for (int j = 1; j <= n-i; j++){
            cout << " ";
        }
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