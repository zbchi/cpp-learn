#include "MyArray.hpp"
#include <iostream>
using namespace std;
#include <string>

class Maker
{
public:
    Maker() {}
    Maker(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    string name;
    int age;
};

void printMaker(MyArray<Maker> &arr)
{
    for (int i = 0; i < arr.getSize(); i++)
    {
        cout << arr[i].name << "  " << arr[i].age << endl;
    }
}

void test()
{
    MyArray<Maker> arr(4);
    Maker m1("wukong", 19);
    Maker m2("beijita", 30);
    Maker m3("duandi", 19);
    Maker m4("wukong", 19);
    arr.Push_Back(m1);
    arr.Push_Back(m2);
    arr.Push_Back(m3);
    arr.Push_Back(m4);

    printMaker(arr);

    MyArray<int> myint(10);
    for (int i = 0; i < 10; i++)
    {
        myint.Push_Back(i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        cout << myint[i] << "  ";
    }
}

int main()
{
    test();
}