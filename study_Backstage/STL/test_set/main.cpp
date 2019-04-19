#include <set>
#include <iostream>
using namespace std;

int main() {
    set<int> s;
    cout << "isEmpty = " << s.empty() << endl;
    s.clear();
    cout << "isEmpty = " << s.empty() << endl;
    s.insert(1);
    s.insert(13);
    s.insert(13);
    s.insert(5);
    s.insert(11);
    s.insert(7);
    s.insert(5);
    s.insert(10);
    int len = s.size();
    int max_Len = s.max_size();
    cout << "len = " << len << endl;
    cout << "max_Len = " << max_Len << endl;
    cout << "first = " << *s.begin() << endl;
    cout << "last = " << *s.end() << endl;
    cout << "is_Exist_5 = " << s.count(5) << endl;
    set<int>::iterator iter;
    for(iter = s.begin(); iter != s.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    pair<set<int>::const_iterator,set<int>::const_iterator> pr;
    pr = s.equal_range(7);
    cout << "第一个大于等于 7 的数是 ：" << *pr.first << endl;
    cout << "第一个大于 7 的数是 ： " << *pr.second << endl;
    return 0;
}