#include <iostream>
using namespace std;
class Father
{
public:
    Father()
    {
        cout << "构造函数" << endl;
    }
    ~Father()
    {
        cout << "析构函数" << endl;
    }
};

class Son : public Father
{
public:
    Son()
    {
        cout << "Son构造函数" << endl;
    }
    ~Son()
    {
        cout << "Son析构函数" << endl;
    }
};

// 先调用父类的构造，析构函数反之
void test01()
{
    Son s;
}

class A
{
public:
    A()
    {
        cout << "A的构造" << endl;
    }
    ~A()
    {
        cout << "A的析构" << endl;
    }
    Son s; 
};

class B
{
public:
    B()
    {
        cout << "B的构造" << endl;
    }
    ~B()
    {
        cout << "B的析构" << endl;
    }
};
class C
{
public:
    C()
    {
        cout << "C的构造" << endl;
    }
    ~C()
    {
        cout << "C的析构" << endl;
    }
};

class D : public A
{
public:
    D()
    {
        cout << "D的构造" << endl;
    }
    ~D()
    {
        cout << "D的析构" << endl;
    }

public:
    B b;
    C c;
};

// 顺序:父类->成员->自己
void test02()
{
    D d;
}

int main()
{
    test01();
    test02();
    return 0;
}