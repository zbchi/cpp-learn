#include <iostream>
#include <string>
#include <string.h>

using namespace std;
class Maker
{
public:
    int mid;
    int mage;

public:
    Maker(int id, int age)
    {
        mid = id;
        mage = age;
    }
};

void test01()
{
    Maker m1(1, 18);
    Maker m2(m1);
    cout << m1.mid << "  m1   " << m1.mage << endl;
    cout << m2.mid << "  m2   " << m2.mage << endl;

    /*
    m2.mid=m1.maid

    */
}

class student
{
public:
    student(const char *name, int Age)
    {
        pname = (char *)malloc(strlen(name) + 1);
        strcpy(pname, name);
        age = Age;
    }
    ~student()
    {
        cout << "xigouhanshu" << endl;
        if (pname != nullptr)
        {
            free(pname);
            pname = nullptr;
        }
    }

public:
    char *pname;
    int age;
};
void test02()
{
    student s1("xioahua", 18);
    student s2(s1);
    cout << "s1  " << s1.pname << s1.age << endl;
    cout << "s2  " << s2.pname << s2.age << endl;
}

int main()
{
    test01();
    return 0;
}