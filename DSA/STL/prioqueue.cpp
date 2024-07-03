#include <bits/stdc++.h>

using namespace std;

void prioqueue() {
    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(5);
    pq.push(15);

    cout << "Top element: " << pq.top() << endl;
    cout << "Size: " << pq.size() << endl;

    cout << "The elements in the priority queue: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(10);
    pq2.push(20);
    pq2.push(5);
    pq2.push(15);

    cout << "\nTop element: " << pq2.top() << endl;
    cout << "Size: " << pq2.size() << endl;
    
    cout << "The elements in the priority queue: ";
    while (!pq2.empty()) {
        cout << pq2.top() << " ";
        pq2.pop();
    }


}

int main() {
    prioqueue();
    return 0;
}