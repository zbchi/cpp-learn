#include <iostream>
using namespace std;
class Maker
{
    // 把构造函数私有化
private:
    Maker()
    {
    }

public:
    // 定义一个类内的静态成员指针
private:
    static Maker *pMaker;
};
// 在类外初始化时，new一个对象
Maker *Maker::pMaker = new Maker;

void test()
{

    Maker *m = Maker::pMaker;
    // Maker m;
}