 #include <bits/stdc++.h>
 using namespace std;

 void pattern (int n){
    for(int i = 1; i<=2*n-1; i++){

        int stars = i <= n ? i : 2*n-i;
        //stars
        for (int j = 1; j<=stars; j++){
            cout << "*";
        }



        //spaces
        for (int j =1; j<=(n-stars)*2; j++){
            cout << " ";
        }


        //stars
        for (int j =1; j<=stars; j++){
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