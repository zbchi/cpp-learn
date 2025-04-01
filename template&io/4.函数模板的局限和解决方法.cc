#include <iostream>
using namespace std;
#include <string>

template <class T>
void func(T a, T b)
{
    if (a > b)
        cout << "a>b" << endl;
    else
        cout << "a<=b" << endl;
}




void test()
{

    // 如果传入数组名，那么函数模板比较数组名，没有意义
    int arr[100];
    int arr2[20];
    func(arr, arr2);
}

class Maker
{
public:
    Maker(string name, int age)
    {
        this->age = age;
        this->name = name;
    }

public:
    string name;
    int age;
};

int
main()
{
    test();
}