#include <iostream>
using namespace std;

class Maker
{
public:
    Maker()
    {
    }

public:
    static int a;
};

class Maker2
{
public:
    Maker2()
    {
    }
    static void setA(int a)
    {
        a2 = a;
    }

public:
    static int a2;
};
int Maker2::a2 = 200;

// static类内声明，类外初始化
int Maker::a = 10;
void test01()
{
    Maker m;
    cout << Maker::a << endl; // 所有对象共享，属于类
    cout << m.a << endl;
}

void test02()
{
    Maker2::setA(300);
    cout << Maker2 ::a2 << endl;
}
int main()
{
    test01();
    test02();
    return 0;
}