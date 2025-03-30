#include <iostream>
using namespace std;

// 1引用作为函数参数
void func(int &a, int &b)
{
    int sum = a + b;
    cout << "sum=" << sum << endl;
}

void test05()
{
    int a = 10;
    int b = 20;
    func(a, b);
}

// 2引用作为ie函数的返回值
int &func2()
{
    int b = 10; // 不要返回i局部变量的引用
    int &p = b;
    return p;
}

int &func3()
{
    static int b = 10;
    return b;
}

void test06()
{
    /*int &q = func2();
    q = 100;
    cout << q << endl;

    func2() = 200;

    cout << q << endl;*/
    cout << func2() << endl;

    func3() = 100;
    cout << "func3()=" << func3() << endl;
}

int main()
{
    test05();
    test06();

    return 0;
}