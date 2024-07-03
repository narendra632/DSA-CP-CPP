 #include <bits/stdc++.h>
 using namespace std;

 void pattern (int n){
    for (int i=1; i<=n; i++){
        // stars
        for(int j = i; j<=n; j++){
            cout << "*";
        }

        // spaces
        for (int j = 1; j<=(i*2-2); j++){
            cout << " ";
        }

        //stars
        for(int j = i; j<=n; j++){
            cout << "*";
        }

        cout << endl;
    }
    for (int i=1; i<=n; i++){
        // stars
        for(int j = 1; j<=i; j++){
            cout << "*";
        }

        // spaces
        for (int j = 1; j<=(n-i)*2; j++){
            cout << " ";
        }

        //stars
        for(int j = 1; j<=i; j++){
            cout << "*";
        }

        cout << endl;
    }
    

 }



 int main(){
        int n;
        cout << "Enter the number of rows: ";
        cin >> n;
        pattern(n);
        return 0;
 }