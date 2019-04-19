#include <iostream>
#include <memory>
using namespace std;

class A {
public:
    A(int x = 0): m_x(x) {
        cout << "A构造" << endl;
    }
    ~A() {
        cout << "A析构" << endl;
    }
    void print() const {
        cout << m_x << endl;
    }

private:
    int m_x;
};

void test() {
//    A *pa = new A(1232);
    auto_ptr<A> pa(new A(123));
    pa->print();
//    delete pa;
}

int main() {
    cout << "begin" << endl;
    test();
    auto_ptr<A> pb(new A(345));
    pb->print();
    cout << "end" << endl;
    return 0;
}