#include <bits/stdc++.h>

using namespace std;


void digits(){
    int n,lastdigit;
    int count = 0;
    cout<<"Enter the number: ";
    cin >> n;

    while(n>0){
        lastdigit = n%10;
        cout << lastdigit << endl;
        n = n/10;
        count++;
    }
    cout << "The number of digits are: " << count << endl;

}  

int main(){
    digits();
    return 0;
}