#include <iostream>
using namespace std;
class Drink
{
public:
    virtual void Boil() = 0;
    virtual void Brew() = 0;
    virtual void PourInCup() = 0;
    virtual void addSonm() = 0;

    // 模板方法  调用函数的顺序确定下来
    void func()
    {
        Boil();
        Brew();
        PourInCup();
        addSonm();
    }
};

class Coffee : public Drink
{
    virtual void Boil()
    {
        cout << "boil" << endl;
    }
    virtual void Brew()
    {
        cout << "natie" << endl;
    }
    virtual void PourInCup()
    {
        cout << "pourincup" << endl;
    }
    virtual void addSonm()
    {
        cout << "add" << endl;
    }
};

class Tea : public Drink
{
    virtual void Boil()
    {
        cout << "boil" << endl;
    }
    virtual void Brew()
    {
        cout << "tea" << endl;
    }
    virtual void PourInCup()
    {
        cout << "pourincup" << endl;
    }
    virtual void addSonm()
    {
        cout << "add" << endl;
    }
};

void test()
{
    Drink *dr = NULL;
    dr = new Coffee;
    dr->func();
    delete dr;

    cout << endl;

    dr = new Tea;
    dr->func();
    delete dr;
    dr = NULL;
}

int main()
{
    test();
}