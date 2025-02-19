#include <iostream>
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

int main()
{
    test01();
    return 0;
}