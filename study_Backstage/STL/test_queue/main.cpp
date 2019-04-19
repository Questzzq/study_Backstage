#include <iostream>
#include <queue>
using namespace std;

int main() {
    deque<int> values {1, 3, 5, 7, 9};
    queue<int> q2( values );
    cout << q2.front() << endl;
    cout << q2.back() << endl;
    cout << q2.back() << endl;
    cout << q2.front() << endl;
    while (!q2.empty()) {
        cout << q2.front() << endl;
        q2.pop();
    }
    return 0;
}