#include <iostream>
using namespace std;
class Maker
{
public:
    Maker()
    {
        cout << "---------------------" << endl;
    }
    Maker(int a)
    {
        cout << "-----------有参----------" << endl;
    }
    ~Maker()
    {
        cout << "----------------------" << endl;
    }
};

void test01()
{
    // c方式
    Maker *m = (Maker *)malloc(sizeof(Maker));
    free(m);
}

void test02()
{
    // new方式，调用构造函数
    Maker *m = new Maker;
    delete m;
    m = nullptr;

    Maker *m2 = new Maker(19);
    delete m2;
    m2 = nullptr;
}

int main()
{
    test01();
    test02();
    return 0;
}