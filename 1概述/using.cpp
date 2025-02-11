#include <iostream>
using namespace std;
namespace A
{
    int a = 10;
    int b = 20;
    int c = 30;
}

void test01()
{
    // using声明是让命名空间中某个标识符可以直接使用
    using A::a;
    cout << A::a << endl;

    // int a=50;   //using声明了某个变量，在该作用域内不能定义同名变量
}

void test02()
{
    using namespace A;
    cout << a << b << c << endl;

    int a = 100;

    cout << a << endl;
}

int main()
{
    test01();
    test02();

    return 0;
}