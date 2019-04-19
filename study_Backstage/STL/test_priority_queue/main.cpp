#include <cstdlib>
#include <iostream>
#include <queue>
using namespace std;

struct node {
    int n;
    int value;
    node(int a = 0, int b = 0): n(a), value(b) {}
};

struct cmp {
    bool operator()(const node& a, const node& b) {
        if(a.n == b.n) {
            return a.value > b.value;
        }
        return a.n > b.n;
    }
};

struct cmps {
    bool operator()(const node& a, const node& b) {
        if (a.n < b.n) {
            return true;
        } else if (a.n == b.n && a.value < b.value) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    priority_queue<int, vector<node>, cmps> p;
    int n;
    cin >> n;
    node ns;
    for(int i = 0; i < n; i++) {
        cin >> ns.n >> ns.value;
        p.push(ns);
    }
    while(!p.empty()) {
        cout << p.top().n << " " << p.top().value << endl;
        p.pop();
    }
    return 0;
}