#include <iostream>
#include <string>
using namespace std;
class Maker
{
public:
    Maker(int id, string name)
    {
        this->id = id;
        this->name = name;
    }

public:
    int id;
    string name;
};

// 行参和实参是一个对象
ostream &operator<<(ostream &out, Maker &m)
{
    cout << m.id << "  " << m.name << endl;
    return out;
}

void test01()
{

    Maker m(10, "xiaoming");
    cout << m << endl;

    cout << 10;   // 内部重载了基础数据类型
    cout << endl; // endl是一个函数
}

int main()
{
    test01();
    return 0;
}