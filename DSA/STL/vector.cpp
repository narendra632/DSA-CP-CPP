#include <bits/stdc++.h>

using namespace std;

void vectors() {


    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.emplace_back(4);
    cout << "Size: " << v1.size() << endl;
    cout << v1[0] << " " << v1[1] << " " << v1[2] << " " << v1[3] << " " << v1[4] << endl;


    vector<int> v2(3, 50);
    cout << "Size: " << v2.size() << endl;
    cout << v2[0] << " " << v2[1] << " " << v2[2] << endl;

    vector<pair<int, string>> v3;
    v3.push_back({1, "one"});
    v3.push_back({2, "two"});
    cout << "Size: " << v3.size() << endl;
    cout << v3[0].first << " " << v3[0].second << endl; 


}

int main() {
    vectors();
    return 0;
}