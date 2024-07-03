#include <bits/stdc++.h>

using namespace std;

void queues() {
    queue<char> q;

    q.push('a');
    q.push('b');
    q.push('c');
    q.push('d');

    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;
    cout << "Size: " << q.size() << endl;

    cout << "The elements in the queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}

int main() {
    queues();
    return 0;
}