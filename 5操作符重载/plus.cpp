#include <iostream>
using namespace std;
class Maker
{
public:
    Maker(int id, int age)
    {
        this->id = id;
        this->age = age;
    }
    Maker operator+(Maker &m2)
    {
        Maker temp(this->id + m2.id, this->age + m2.age);
        return temp;
    }

public:
    int id;
    int age;
};

class student
{
public:
    student()
    {
        mid = 0;
    }
    student(int id)
    {
        mid = id;
    }

public:
    int mid;
}
/*Maker operator+(Maker &p1, Maker &p2)
{
    Maker temp(p1.id + p2.id, p1.age + p2.age);
    return temp;
}*/

void
test01()
{
    Maker m1(1, 20);
    Maker m2(2, 22);
    Maker m3 = m1 + m2;

    cout << m3.id << endl
         << m3.age << endl;
}
int main()
{
    test01();
    return 0;
}