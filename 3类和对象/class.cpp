#include <iostream>
using namespace std;

class Maker // 类
{
public:
    int a;      // 成员属性(成员变量)
    void func() // 成员方法(成员函数)
    {
        cout << "func" << endl;
    }
};

int main()
{
    Maker m; // m是对象
    return 0;
}