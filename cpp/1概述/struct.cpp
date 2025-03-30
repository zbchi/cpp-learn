#include <iostream>
using namespace std;

// 自定义数据类型
struct Maker
{
    char name[64];
    int age;
};

void test01()
{
    Maker a;
}

struct Maker2
{
    int a;
    void func() // 结构体内写函数
    {
        cout << "func" << endl;
    }
};

void test02()
{
    Maker2 a2;
    a2.func();
}

int main()
{
    test01();
    test02();

        return 0;
}
