#include <iostream>
#include "test.h"
using namespace std;

namespace A
{ // A是命名空间的名字
    int a;
    void func()
    {
    }
}

namespace Maker
{
    int a;
    namespace B
    {
        int b = 40;
    }
}

namespace Maker
{
    int c = 30;
}

void test()
{
    cout << Maker::c << endl;
}

namespace
{
    int d = 50;
}

int mya = 10;

// 命名空间取别名
void test01()
{ //          新名字    旧名字
    namespace nameMaker = Maker;
    cout << nameMaker::a << endl;
}
int main()
{
    int mya = 20;
    cout << "mya=" << mya << endl;
    cout << "::mya=" << ::mya << endl;
    cout << Maker::c << endl;
    cout << Maker::B::b << endl;
    cout << "d=" << d << endl;
    test();

    test01();

    myMaker1::func();
    //   myMaker2::func();
    return 0;
}