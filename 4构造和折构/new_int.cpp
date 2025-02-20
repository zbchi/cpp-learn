#include <iostream>
#include <cstring>
using namespace std;

class Maker
{
public:
    Maker()
    {
        cout << "------------无参构造---------" << endl;
    }
    Maker(int a)
    {
        cout << "-----------有参----------" << endl;
    }
    ~Maker()
    {
        cout << "----------析构------------" << endl;
    }
};

void test01()
{
    int *pint = new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {
        pint[i] = i + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << pint[i] << " ";
    }
    cout << endl;

    char *pchar = new char[64];
    strcpy(pchar, "yosufwse");
    cout << pchar << endl;

    // 如果new时有[],delete也要
    delete[] pint;
    delete[] pchar;
}

void test02()
{
    Maker *ms = new Maker[2];
    delete[] ms;

    // Maker *ms2 = new Maker[2]{Maker(10), Maker(20)};
}

void test03()
{
    void *m = new Maker;
    delete (Maker *)m; // 用void*delete,不会调用xigou
}

int main()
{
    test01();
    test02();
    test03();
    return 0;
}