#include <iostream>
using namespace std;

//class CExample {
//private:
//    int a;
//public:
//    // 构造函数
//    CExample(int b) {
//        a = b;
//    }
//    // 一般函数
//    void show (){
//        cout << a << endl;
//    }
//    // 重置函数
//    void reSet(int c) {
//        this->a = c;
//    }
//    // 析构函数
//    ~CExample() {
//        cout << "delete successfully " << a << endl;
//    }
//    // 自定义一个拷贝构造函数
//    CExample(const CExample& D) {
//        this->a = D.a;
//        cout << this->a << "调用了自定义拷贝构造函数" << endl;
//    }
//};
//
//int main() {
//    CExample A(100);
//    CExample B = A;
//    B.show();
//    B.reSet(110);
//    B.show();
//    A.show();
//    CExample C(B);
//    C.show();
//    C.reSet(120);
//    C.show();
//    B.show();
//    return 0;
//}

//class CExample
//{
//private:
//    int a;
//
//public:
//    //构造函数
//    CExample(int b)
//    {
//        a = b;
//        cout<<"creat: "<<a<<endl;
//    }
//
//    //拷贝构造
//    CExample(const CExample& C)
//    {
//        a = C.a;
//        cout<<"copy"<<endl;
//    }
//
//    //析构函数
//    ~CExample()
//    {
//        cout<< "delete: "<<a<<endl;
//    }
//
//    void Show ()
//    {
//        cout<<a<<endl;
//    }
//};
//
////全局函数，传入的是对象
//void g_Fun(CExample C)
//{
//    cout<<"test"<<endl;
//}
//
//int main()
//{
//    CExample test(1);
//    //传入对象
//    g_Fun(test);
//
//    return 0;
//}


class CExample {
private:
    int a;

public:
    //构造函数
    CExample(int b) {
        cout << "creat" << endl;
        a = b;
    }

    //拷贝构造
    CExample(const CExample& C) {
        a = C.a;
        cout<<"copy"<<endl;
    }

    // 析构函数
    ~CExample() {
        cout << "delete" << endl;
    }

    void Show () {
        cout<<a<<endl;
    }
};

//全局函数
CExample g_Fun() {
    CExample temp(10);
    temp.Show();
    return temp;
}

int main() {
    CExample gg = g_Fun();
    gg.Show();
    return 0;
}