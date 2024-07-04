#include <bits/stdc++.h>

using namespace std;

int palin(int n){
    int rev = 0;
    int temp = n;

    while(n>0){
        int last = n%10;
        rev = rev*10 + last;
        n = n/10;
    }

    if(rev == temp){
        cout << "The number is a palindrome" << endl;
    }
    else{
        cout << "The number is not a palindrome" << endl;
    }
    return 0;
}



bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    int rev = 0;
    int temp = x;

    while(x>0){
        int last = x%10;
        rev = rev*10 + last;
        x = x/10;
    }

    if(rev == temp){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int t;
    cout << "Enter the number: ";
    cin >> t;
    palin(t);

    return 0;
}