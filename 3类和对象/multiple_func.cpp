#include <iostream>
using namespace std;
void func()
{
    cout << "func()" << endl;
}

void func(int a)
{
    cout << "func(int a)" << endl;
}

int main()
{

    func();
    func(19);
}