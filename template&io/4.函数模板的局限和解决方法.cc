#include <iostream>
using namespace std;
#include <string>

template <class T>
void func(T &a, T &b)
{
    if (a > b)
        cout << "a>b" << endl;
    else
        cout << "a<=b" << endl;
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

// 具体化函数模板,注意上面的函数模板要有才能具体化
template <>
void func<Maker>(Maker &a, Maker &b)
{
    cout << "函数模板的具体化" << endl;
    if (a.age > b.age)

        cout << "a>b" << endl;
    else
        cout << "a<=b" << endl;
}

void test()
{

    // 如果传入数组名，那么函数模板比较数组名，没有意义
    int arr[100];
    int arr2[20];

    Maker m1("dsfsdf", 24);
    Maker m2("fds", 342);
    func(m1, m2);
}

int main()
{
    test();
}