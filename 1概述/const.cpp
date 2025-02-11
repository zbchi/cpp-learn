#include <iostream>
using namespace std;

const int a = 10; // 没有内存

void test01()
{

    // 发生了常量折叠

    cout << "a=" << a << endl; // 编译器：cout<<"aa="<<10<<endl

    // volatile禁止优化
    volatile const int b = 20; // 栈区
    int *p = (int *)&b;
    *p = 2000;

    cout << "b=" << b << endl; // cout<<"b="<<20<<endl
    cout << "*p=" << *p << endl;

    cout << "b 的地址=" << (int *)&b << endl;
    cout << "p 指向的地址=" << p << endl;
}

int main()
{
    test01();
    extern const int c;
    cout << "c=" << c << endl;
    return 0;
}
