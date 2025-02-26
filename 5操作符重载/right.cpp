#include <iostream>
#include <string>
using namespace std;
class Maker
{
    friend istream &operator>>(istream &in, Maker &m);

public:
    Maker(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    int getAge()
    {
        return this->age;
    }

private:
    string name;
    int age;
};

istream &operator>>(istream &in, Maker &m)
{
    in >> m.age;
    in >> m.name;
    return in;
}

void test02()
{
    Maker m("xiaoming", 15);
    Maker m2("xiaoming2", 25);
    cin >> m >> m2;
    cout << m.getAge() << endl;
}
int main()
{
    test02();
    return 0;
}
