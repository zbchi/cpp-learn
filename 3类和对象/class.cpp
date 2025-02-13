#include <iostream>
using namespace std;

class Maker // 1.把属性和方法放到类中，赋予权限
{
private:
    int id;
    string name;

public:
    void set(string Name, int Id)
    {
        id = Id;
        name = Name;
    }
    void printMaker()
    {
        cout << "id=" << id << "name=" << name << endl;
    }

protected:
    int a;
};

void test()
{
    Maker m;
    m.set("sb", 1);
    m.printMaker();
}
int main()
{
    test();
}
