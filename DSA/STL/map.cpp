#include <bits/stdc++.h>

using namespace std;

void maps() {
    map<int,int> m;
    m[1] = 100;
    m[2] = 200;
    m[3] = 300;

    cout << "The elements in the map: ";
    for (auto i = m.begin(); i != m.end(); i++) {
        cout << i->first << " " << i->second << " ";
    }

    cout << endl;

    cout << "Size: " << m.size() << endl;


}

int main() {
    maps();
    return 0;
}