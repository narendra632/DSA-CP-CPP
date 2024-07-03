#include <bits/stdc++.h>

using namespace std;

void lists() {
    list<int> ls;

    ls.push_front(2);
    ls.push_front(3);
    ls.emplace_back(4);
    ls.emplace_front(1);

    cout << "The elements in the list: ";
    for (auto it = ls.begin(); it != ls.end(); it++)
        cout << *it << " ";

}

int main() {
    lists();
    return 0;
}