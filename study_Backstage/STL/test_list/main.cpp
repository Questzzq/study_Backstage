#include <list>
#include <iostream>
using namespace std;

int main() {
    list<int> l{1, 3, 4, 7};
    list<int>::iterator iter;
    for(iter = l.begin(); iter != l.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    list<int>::reverse_iterator it;
    for(it = l.rbegin(); it != l.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    // operator= 重载赋值运算符
    list<int> l1;
    l1 = l;
    // 返回链表实际元素的个数
    int len = l1.size();
    // 返回链表可能容纳的最大元素数量
    long max_Len = l1.max_size();
    cout << len << endl;
    cout << max_Len << endl;
    // clear 清除链表中的所有元素
    l1.clear();
    cout << l1.size() << endl;
    cout << l.size() << endl;
    int a[5] = {1,2,3,4,5};
    list<int> a1;
    list<int>::iterator its;
    // assign(n,num) 将n个num拷贝赋值给链表c
    a1.assign(6,10);
    for(its = a1.begin();its!=a1.end();its++){
        cout << *its << " ";
    }
    cout << endl;
    // assign(beg,end) 将[beg,end)区间的元素拷贝赋值给链表c
    a1.assign(a,a+5);
    for(its = a1.begin();its!=a1.end();its++){
        cout << *its << " ";
    }
    cout << endl;
    // front 返回链表的第一个元素
    cout << a1.front() << endl;
    // back 返回链表的最后一个元素
    cout << a1.back() << endl;
    // empty 判断是否为空
    if(a1.empty())
        cout << "a1 is empty" << endl;
    else
        cout << "a1 is not empty" << endl;
    // c.insert(pos,num)     在pos位置插入元素num
    //c.insert(pos,n,num)    在pos位置插入n个元素num
    //c.insert(pos,beg,end)  在pos位置插入区间为[beg,end)的元素
    a1.insert(, 789);
    for(its = a1.begin();its!=a1.end();its++){
        cout << *its << " ";
    }
    cout << endl;
    a1.insert(2, 4, 5);
    for(its = a1.begin();its!=a1.end();its++){
        cout << *its << " ";
    }
    cout << endl;
    a1.insert(2, a, a + 5);
    for(its = a1.begin();its!=a1.end();its++){
        cout << *its << " ";
    }
    cout << endl;
    a1.erase(a1.begin());
    for(its = a1.begin();its!=a1.end();its++){
        cout << *its << " ";
    }
    cout << endl;
    return 0;
}
