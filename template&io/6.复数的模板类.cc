#include <iostream>
using namespace std;

template <class T>
class Maker
{
public:
    Maker()
    {
        a = 0;
        b = 0;
    }
    Maker(T r, T i)
    {
        a = r;
        b = i;
    }

    Maker Maker_add(Maker &c2)
    {
        Maker<T> c;
        c.a = this->a + c2.a;
        c.b = this->b + c2.b;
        return c;
    }

    Maker operator+(Maker &c2)
    {
        Maker tmp(this->a + c2.a, this->b + c2.b);
        return tmp;
    }

    void printMaker()
    {
        cout << "(" << a << "," << b << ")" << endl;
    }

private:
    T a;
    T b;
};

void test()
{
    Maker c1(3.31, 4.0);
    Maker c2(5.0, -10.16);
    Maker c3 = c1.Maker_add(c2);
    c3.printMaker();

    c3 = c1 + c2;
};

int main()
{
    test();
}