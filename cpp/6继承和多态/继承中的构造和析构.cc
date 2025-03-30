#include <iostream>
using namespace std;
class Father
{
public:
    Father()
    {
        cout << "构造函数" << endl;
    }
    ~Father()
    {
        cout << "析构函数" << endl;
    }
};

class Son : public Father
{
public:
    Son()
    {
        cout << "Son构造函数" << endl;
    }
    ~Son()
    {
        cout << "Son析构函数" << endl;
    }
};


//先调用父类的构造，析构函数反之
void test01()
{
    Son s;
}
int main()
{
    test01();
    return 0;
}