#include <iostream>
using namespace std;
//代码复用  功能扩展
class Father
{
public:
    void func1()
    {
        cout << "func1" << endl;
    }
    void func2()
    {
        cout << "func2" << endl;
    }
};
class Son : public Father
{
public:
    void func3()
    {
        cout << "func3" << endl;
    }
};
void test()
{
    Son s;
    s.func1();
    s.func2();
    s.func3();
}
int main()
{
    test();
    return 0;
}    