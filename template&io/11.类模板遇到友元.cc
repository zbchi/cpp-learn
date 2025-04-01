#include <iostream>
using namespace std;

#include <string>

template <class NameType, class AgeType>
class Maker
{
    friend void printMaker(Maker<NameType, AgeType> &p)
    {
        cout << "类内实现" << p.name << "  " << p.age << endl;
    }

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

template <class NameType, class AgeType>
class Maker2; // 前向声明Maker2，告诉编译器这个类稍后会声明

// 告诉编译器下面有printMaker2的实现
template <class NameType, class AgeType>
void printMaker2(Maker2<NameType, AgeType> &p); // 声明 但不知道Maker2下面有没有实现
// 前向声明printMaker2，告诉编译器稍后会定义这个模板函数

template <class NameType, class AgeType>
class Maker2
{
    // 1.在函数名和括号之间加上<>空参数列表，显示地指明它是模板函数，否则编译器认为是普通函数
    friend void printMaker2<>(Maker2<NameType, AgeType> &p);
    // 编译器不知道printMaker2下面有没有实现，需要知道函数的结构

public:
    NameType name;
    AgeType age;

public:
    Maker2(NameType name, AgeType age)
    {
        this->name = name;
        this->age = age;
    }
    void printMaker()
    {
        cout << "name:" << this->name << "  age:" << this->age << endl;
    }
};

// 友元在类外实现要写成函数模板
template <class NameType, class AgeType>
void printMaker2(Maker2<NameType, AgeType> &p)
{
    cout << "类外实现的友元函数" << p.name << " " << p.age << endl;
}
void test02()
{
    Maker2<string, int> m("wukong", 18);
    printMaker2(m);
}

void test()
{
    Maker<string, int> m("wukong", 18);
    printMaker(m);
}

int main()
{
    test();
}