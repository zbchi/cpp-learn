#include <iostream>
using namespace std;
class Maker
{
public:
    Maker(int id, int age)
    {
        this->id = id;
        this->age = age;
    }

    void printMaker() const // 常函数  不能修改普通成员变量
    {
        // id=100;
        score = 200;
        cout << score << endl;
    }
    void func()
    {
        cout << "func" << endl;
    }

    int id;
    int age;
    mutable int score;
};

void test01()
{
    const Maker m(1, 18); // 常对象
    // m.age = 100;
    m.func();
    m.printMaker();
}
int main()
{
    test01();
    return 0;
}