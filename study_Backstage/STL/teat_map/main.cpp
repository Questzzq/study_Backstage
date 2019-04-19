#include <iostream>
#include <string>
#include <map>
using namespace std;

int main () {
    map<int, string> test;
    test[1] = "kdjvfhk";
    test[1] = "hello";
    test.insert(make_pair(3, "world"));
    test.insert(pair<int, string>(4, "hi"));
    test.insert(map<int, string>::value_type(5, "china"));
    int len = test.size();
    cout << "len = " << len << endl;
    auto it = test.begin();
    while(it != test.end()) {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    // 注意: 如果使用for循环遍历map，不能写成 ‘<’ 的形式
    for(auto its = test.begin(); its != test.end(); its++) {
        cout << its->first << " " << its->second << endl;
    }

    // 注意: 如果使用for循环遍历map，不能写成 ‘< test.size()’ 的形式
    for(auto ites = 0; ites < test.size(); ites++) {
        cout << test[ites] << endl;
    }
    return 0;
}
