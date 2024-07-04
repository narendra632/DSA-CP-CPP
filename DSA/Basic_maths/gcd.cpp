#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);

}

int main(){
    int a, b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    cout << "The gcd of the two numbers is: " << gcd(a, b) << endl;
    return 0;
}