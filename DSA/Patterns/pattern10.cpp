#include <bits/stdc++.h>
using namespace std;

void pattern(int n) {
    for(int i =1; i<=n; i++){

        for(char j = ('A'+n-1)-i+1; j <= ('A'+n-1); j++){
            cout << j;
        } 
        cout << endl;
    }


}

int main(){
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    pattern(t);
}