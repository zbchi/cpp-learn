#include <iostream>
using namespace std;
void myPlus(int a, int b)
{

    cout << "普通函数" << endl;
}

template <class T>
void myPlus(T a, T b)
{
    cout << "函数模板" << endl;
}

template <class T>
void myPlus(T a, T b, T c)
{
    cout << "函数模板 T c" << endl;
}

// 函数模板和普通函数可以重载
void test()
{

    int a = 10;
    int b = 20;

    // 如果都可以实现功能，普通函数优先调用

    myPlus(a, b);

    // 使用<>空参数列表强制调用函数模板
    myPlus<>(a, b);

    // 函数模板之间也可以进行重载
    myPlus(a, b, 10);

    // 如果函数模可以产生更好的匹配，优先使用函数模板
    char c1 = 'a';
    char c2 = 'b';
    myPlus(c1, c2);
}
int main()
{
    test();
}