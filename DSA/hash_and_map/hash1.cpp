#include <bits/stdc++.h>

using namespace std;


int hashnum(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0 ; i<n; i++){
        cin >> arr[i];
    }

    int hash[1000] = {0};
    for(int i = 0; i<n;i++){
        hash[arr[i]]++;
    }

    for(int i = 0; i<1000; i++){
        if (hash[i] > 0){
            cout << i << " is present " << hash[i] << " times" << endl;
        }
    }
    return 0;
}


int hashchar(){
    string s; 
    cout << "Enter the string: ";
    cin >> s;

    int hash[26] = {0};
    for(int i = 0; i< s.length(); i++){
        hash[s[i] - 'a']++;
    }

    for(int i=0; i<26; i++){
        if(hash[i] > 0){
            cout << char(i+'a') << " is present " << hash[i] << "times." << endl;
        }
    }
    return 0;
}

int hash256(){
    string s; 
    cout << "Enter a string: ";
    cin >> s;

    int hash[256] = {0};

    for(int i=0; i<s.length(); i++){
        hash[s[i]]++;
    }

    for(int i=0; i<256; i++){
        if(hash[i] > 0){
            cout << char(i) << " is present " << hash[i] << " times." << endl;
        }
    }
    return 0;
}


int maphash(){
    int n;
    cout << "Enter the size of the Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the Arrar: ";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    map<int,int>hash;
    for(int i = 0; i<n; i++){
        hash[arr[i]]++;
    }


    int p; 
    cin >> p;
    while(p--){
        int number;
        cin >> number;
        cout << "The number " << number << " is present " << hash[number] << " TImes.";
    }
    return 0;
    
}

int maphashchar(){
    string s;
    cout << "Enter the string: ";
    cin >> s;

    map<char,int>hash;
    for(int i = 0; i<s.length(); i++){
        hash[s[i]]++;
    }


    for(auto it = hash.begin(); it != hash.end(); it++ ){
        cout << "The character " << it->first << " appears " << it->second << "Times." << endl;
    }
    return 0;
    
}
int main(){
    //hashnum();
    //hashchar();
    //hash256();
    //maphash();
    maphashchar();
    return 0;
}