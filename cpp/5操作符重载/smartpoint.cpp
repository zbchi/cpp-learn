#include <iostream>
using namespace std;

class Maker
{
public:
    Maker()
    {
        cout << "无参" << endl;
    }

    void printMaker()
    {
        cout << "hello Maker" << endl;
    }

    ~Maker()
    {
        cout << "xigou" << endl;
    }
};

class smartpoint
{
public:
    smartpoint(Maker *m)
    {
        this->pMaker = m;
    }

    // 重载指针运算符
    Maker *operator->()
    {
        return this->pMaker;
    }

    // 重载*
    Maker &operator*()
    {
        return *pMaker;
    }

    ~smartpoint()
    {
        if (this->pMaker != nullptr)
            delete this->pMaker;
        this->pMaker == nullptr;
    }

private:
    Maker *pMaker;
};

void test01()
{
    Maker *p = new Maker;
    smartpoint sm(p); // 栈区会调用析构函数
    sm->printMaker();
    (*sm).printMaker();
}
int main()
{
    test01();
}