//#include <iostream>
//using namespace std;
//
//void swap(int& a, int&b) {
//    int temp = a;
//    a = b;
//    b = temp;
//}
//
//int& set_Value(int *a, int n) {
//    return a[n];
//}
//
//int main() {
//    int i;
//    int d;
//    int &ri = i;
//    ri = 345;
//    int& rd = d;
//    d = 987;
//    cout << "value: " << d << "  adress: " << &d << endl;
//    cout << "value: " << rd << "  adress: " << &rd << endl;
//    cout << "value: " << i << "  adress: " << &i << endl;
//    cout << "value: " << ri << "  adress: " << &ri << endl;
//    cout << "-------------------\n";
//    swap(i, d);
//    cout << "value: " << d << "  adress: " << &d << endl;
//    cout << "value: " << rd << "  adress: " << &rd << endl;
//    cout << "value: " << i << "  adress: " << &i << endl;
//    cout << "value: " << ri << "  adress: " << &ri << endl;
//    cout  << "-------------------\n";
//
//    swap(ri, rd);
//    cout << "value: " << d << "  adress: " << &d << endl;
//    cout << "value: " << rd << "  adress: " << &rd << endl;
//    cout << "value: " << i << "  adress: " << &i << endl;
//    cout << "value: " << ri << "  adress: " << &ri << endl;
//
//    int n;
//    cin >> n;
//    int a[n];
//    for(int i = 0; i < n; i++) {
//        cin >> a[i];
//        cout << a[i] << " ";
//    }
//    cout << "\n";
//    int temp;
//    for(int i = 0; i < n; i++) {
//        cin >> temp;
//        set_Value(a, i) = temp;
//    }
//    for(int i = 0; i < n; i++) {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//    return 0;
//}
#include <iostream>
using namespace std;

double& setValues(double *a, int i) {
    return a[i];
}

int main() {
    double vals[] = {1.1, 2.1, 3.1, 4.1};
    cout << "改变前的值" << endl;
    for ( int i = 0; i < 4; i++ ) {
        cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
    }

    setValues(vals, 1) = 20.23; // 改变第 2 个元素
    setValues(vals, 3) = 70.8;  // 改变第 4 个元素

    cout << "改变后的值" << endl;
    for ( int i = 0; i < 4; i++ ) {
        cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
    }
    return 0;
}
