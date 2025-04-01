#include <iostream>
using namespace std;
#include <string>

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
    Maker(NameType name, AgeType age);
    void printMaker();
};

// 类模板的成员函数类外实现
// 要写成函数模板
template <class NameType, class AgeType>
Maker<NameType, AgeType>::Maker(NameType name, AgeType age)
{
    cout << "构造函数" << endl;
    this->name = name;
    this->age = age;
}

template <class NameType, class AgeType>
void Maker<NameType, AgeType>::printMaker()
{
    cout << "Name:" << this->name << "  Age:" << this->age << endl;
}

int main()
{
    Maker<string, int> m("haha", 20);
    m.printMaker();
    return 0;
}