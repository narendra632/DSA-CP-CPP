#include <bits/stdc++.h>

using namespace std;

void stacks() {
    stack<char> s;

    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');

    cout << "Top element: " << s.top() << endl;
    cout << "Size: " << s.size() << endl;

    cout << "The elements in the stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }


}

int main() {
    stacks();
    return 0;
}