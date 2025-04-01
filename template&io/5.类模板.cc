#include <iostream>
using namespace std;

template <class NameType, class AgeType>
class Maker
{
public:
    NameType name;
    AgeType age;

public:
    Maker(NameType name, AgeType age = int, class T = int)
    {
        this->name = name;
        this->age = age;
    }
    void printMaker()
    {
        cout << "name:" << this->name << "  age:" << this->age << endl;
    }
};

void test()
{
    Maker m("wukong", 19);
    m.printMaker();
}

int main()
{
    test();
}