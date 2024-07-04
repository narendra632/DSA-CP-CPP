#include <bits/stdc++.h>

using namespace std;


void printdivs(int n){
    vector<int> divs;
    cout << "all divisors of " << n <<" are: " << endl;
    for(int i = 1; i<=sqrt(n); i++){
        if(n%i==0){
            divs.push_back(i);
            if(i!=n/i){
                divs.push_back(n/i);
            }

        }
    }
    sort(divs.begin(), divs.end());
    for(int i = 0; i< divs.size(); i++){
        cout << divs[i] << " ";
    }
}

int main(){
    int t;
    cout << "Enter the number: ";
    cin >> t;
    printdivs(t);

    return 0;
}