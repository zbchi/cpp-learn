#include <iostream>
using namespace std;

int myPlus(int a, int b)
{
    return a + b;
}

template <class T>
int myPlus2(T a, T b)
{
    return a + b;
}

void test()
{
    int a = 10;
    int b = 20;
    char c = 'a';
    myPlus(a, c); // 普通函数可以进行隐式转换

    // 函数模板不能直接隐式转换
    // myPlus2(a,c);

    myPlus2<int>(a, c); // 加上参数列表
}
