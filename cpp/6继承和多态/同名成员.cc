#include <iostream>
using namespace std;
class Father
{
public:
    int a;
    Father()
    {
        a = 10;
    }

    void func()
    {
        cout << "Father func" << endl;
    }
    void func(int a)
    {
        cout << "Father func(int a)" << endl;
    }
    void func(int a, int b)
    {
        cout << "Father func(int a,int b)" << endl;
    }
};

class Son : public Father
{
public:
    int a;
    Son()
    {
    }
    void func()
    {
        cout << "Son func" << endl;
    }
};

// 子类的同名成员会隐藏父类的同名成员
void test01()
{
    Son s;
    cout << s.a << endl;

    cout << sizeof(Son) << endl;
    // 通过父类名加作用域来访问
    cout << s.Father::a << endl;
}

// 当子类有和父类同名函数时，父类所有函数重载都会被隐藏
void test02()
{
    Son s;
    s.func();

    // s.func(10);
    s.Father::func(10);
}
int main()
{
    test01();
    test02();
}