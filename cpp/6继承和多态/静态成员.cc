#include <iostream>
using namespace std;
class Father
{
public:
    static int mA;
};
int Father::mA = 10;

class Son : public Father
{
public:
    static int mA;
};
int Son::mA = 20;

// 静态成员可以被继承
void test01()
{
    Son s;
    cout << s.mA << endl;
}
int main()
{
    test01();
    return 0;
}