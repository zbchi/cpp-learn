#include <iostream>
using namespace std;
class Maker
{
public:
    Maker()
    {
        name = "cui";
    }
    void printMaker()
    {
        cout << name + "you" << endl;
    }

    void operator()()
    {
        cout << "hello" << endl;
    }

    int operator()(int a, int b)
    {
        cout << a + b << endl;
        return a + b;
    }

public:
    string name;
};

void test()
{
    Maker func;
    func(); // func是对象
    func(10, 20);
    func.printMaker();
}

int main()
{
    test();
    return 0;
}