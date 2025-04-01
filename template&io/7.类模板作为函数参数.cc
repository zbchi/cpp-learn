#include <iostream>
using namespace std;

#include <string>

template <class NameType, class AgeType>
class Maker
{
public:
    NameType name;
    AgeType age;

public:
    Maker(NameType name, AgeType age)
    {
        this->name = name;
        this->age = age;
    }
    void printMaker()
    {
        cout << "name:" << this->name << "  age:" << this->age << endl;
    }
};

// 1.指定传入的数据类型
void func(Maker<string, int> &m)
{
    m.printMaker();
} 

// 2.参数模板化
template <class T1, class T2>
void func2(Maker<T1, T2> &m)
{
    m.printMaker();
}

// 3.整个类模板化
template <class T>
void func3(T &m)
{
    m.printMaker();
}

void test()
{
    Maker<string, int> m1("wukong", 18);
    func(m1);
    func2(m1);
    func3(m1);
}

int main()
{
    test();
}