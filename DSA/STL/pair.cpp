#include <bits/stdc++.h>
using namespace std;

void explainpair() {
    // Pair provides a way to store two heterogeneous objects as a single unit.
    // Pair can be assigned, copied and compared.
    // Pair is used to combine together two values which may be different in type.
    // Pair provides a way to store two elements together as a single unit.
    // Pair is an ordered pair.

    pair <int, int> p1 = {1,3};

    pair <int, string> p2 = {1, "GeeksforGeeks"};

    pair <int, pair<int, string>> p3 = {1, {3, "GeeksforGeeks"}};

    pair <int, string> arr[] = {{1,"Hello"}, {6,"World"}, {9,"Geeks"}};

    cout << p1.first << " " << p1.second << endl;

    cout << p2.first << " " << p2.second << endl;

    cout << p3.first << " " << p3.second.first << " " << p3.second.second << endl;

    cout << arr[1].second << " " << arr[2].second;
    }


int main(){
    explainpair();
    return 0;
}