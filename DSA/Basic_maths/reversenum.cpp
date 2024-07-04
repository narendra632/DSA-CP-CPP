#include <bits/stdc++.h>

using namespace std;

void reverse(int x){
    bool isnegative = x < 0;
    x = abs(x);
    int reversed = 0;

    while(x>0){
        int lastdigit = x%10;
        reversed = reversed*10 + lastdigit;
        x = x/10;
    }
    if(isnegative){
        cout << "The reversed number is: " << -reversed << endl;
    }
    else{
        cout << "The reversed number is: " << reversed << endl;
    }
}

int main(){
    int t;
    cout << "Enter the number: ";
    cin >> t;
    reverse(t);

    return 0;
}