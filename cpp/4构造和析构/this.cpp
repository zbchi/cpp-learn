#include <iostream>
using namespace std;
class Maker
{
public:
    Maker()
    {
        a = 10;
        b = 20;
    }
    void func()
    {
        cout << this->a << "   " << this->b << endl;
    }

public:
    int a;
    int b;
};
void test01()
{
    Maker m;
    m.func();

    Maker m2;
    m2.func();
}

int main()
{
    test01();
    return 0;
}