#include <iostream>
using namespace std;
template <class NameType, class AgeType>
class Maker
{
public:
    Maker(NameType name, AgeType age);
    void printMaker();

public:
    NameType name;
    AgeType age;
};

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