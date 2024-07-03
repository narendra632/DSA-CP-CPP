 #include <bits/stdc++.h>
 using namespace std;

 void pattern (int n){
    for(int i =1; i<= 2*n-1; i++){
        for(int j=1; j<= 2*n-1; j++){
            int top = i-1;
            int left = j-1;
            int down = (2*n-1)-i;
            int right = (2*n-1)-j;
            cout << (n-min(min(top,down),min(left,right)));
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