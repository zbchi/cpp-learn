#include <iostream>
#include <map>
#include <string>
using namespace std;

void test()
{
    map<int, string>::iterator it;
    it--;
    it++;
    // it+2;双向迭代器
}

template <class T>
void printMap(T &m)
{
    for (map<int, string>::iterator it = m.begin(); it != m.end(); ++it)
    {
        cout << "key:" << it->first << "  value:" << it->second << endl;
    }
}

// 改变规则
struct mapfunc
{
    bool operator()(int key1, int key2) const
    {
        return key1 > key2;
    }
};

void test01()
{
    map<int, string> mymap;

    // 1
    mymap.insert(pair<int, string>(3, "aaa"));
    // 2
    mymap.insert(make_pair(6, "ppp"));
    // 3
    mymap.insert(map<int, string>::value_type(2, "ccc"));
    // 4
    mymap[4] = "ddd";

    printMap(mymap);
}
void test02()
{
    map<int, string, mapfunc> mymap;

    // 1
    mymap.insert(pair<int, string>(3, "aaa"));
    // 2
    mymap.insert(make_pair(6, "ppp"));
    // 3
    mymap.insert(map<int, string>::value_type(2, "ccc"));
    // 4
    mymap[4] = "ddd";

    printMap(mymap);
}

// 注意:[]方式插入数据,如果没有实值，那么键值也是存在的
void test03()
{
    map<int, string> mymap;

    // 1
    mymap.insert(pair<int, string>(3, "aaa"));
    // 2
    mymap.insert(make_pair(6, "ppp"));
    // 3
    mymap.insert(map<int, string>::value_type(2, "ccc"));
    // 4
    mymap[4] = "ddd";

    printMap(mymap);

    cout << "size:" << mymap.size() << endl;
    cout << mymap[100] << endl; // 插入键值,返回的是实值
    cout << "size:" << mymap.size() << endl;
}

int main()
{
    test01();

    cout << endl;
    test02();

    cout << endl;
    test03();
}