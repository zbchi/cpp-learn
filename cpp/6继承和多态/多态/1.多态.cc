#include <iostream>
using namespace std;
class People
{
public:
    virtual void Mypro()
    {
        cout << "father" << endl;
    }
};

class Son1 : public People
{
public:
    // 重写父类的虚函数
    virtual void Mypro()
    {
        cout << "Son1" << endl;
    }
};

class Son2 : public People
{
public:
    // 重写父类的虚函数
    virtual void Mypro()
    {
        cout << "Son2" << endl;
    }
};
class Son3 : public People
{
public:
    // 重写父类的虚函数
    virtual void Mypro()
    {
        cout << "Son3" << endl;
    }
};

class Son4 : public People
{
public:
    // 重写父类的虚函数
    virtual void Mypro()
    {
        cout << "Son4" << endl;
    }
};

void doLogin(People *pro)
{
    pro->Mypro();//产生不同的效果
}

void test()
{
    People *pro = NULL;
    pro = new Son1;
    doLogin(pro);
    delete pro;

    pro = new Son2;//不同的对象
    doLogin(pro);
    delete pro;

    
}

int main()
{
    test();
}