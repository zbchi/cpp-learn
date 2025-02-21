#include <iostream>
using namespace std;
#include <string>
class Building
{
    friend class GoodF; // 声明这个类为Building的友元类
    friend class GoodF2;
    friend void GoodGay(Building &bd); // 声明这个全局函数为building类的友元函数
private:
    string woshi;

public:
    string keting;
    Building()
    {
        keting = "客厅";
        woshi = "卧室";
    }
};

class GoodF
{
public:
    void func(Building &bd)
    {
        cout << bd.keting << endl;
        cout << bd.woshi << endl;
    }
};

class GoodF2
{
public:
    Building *pbu;
    GoodF2()
    {
        pbu = new Building;
    }

    void func()
    {
        cout << pbu->keting << endl;
        cout << pbu->woshi << endl;
    }
    // 防止浅拷贝
    GoodF2(const GoodF2 &f2)
    {
        pbu = new Building;
        pbu->keting = f2.pbu->keting;
        pbu->woshi = f2.pbu->woshi;
    }

    ~GoodF2()
    {
        if (pbu != nullptr)
            delete pbu;
        pbu = nullptr;
    }
};

void GoodGay(Building &bd)
{
    cout << bd.keting << endl;
    cout << bd.woshi << endl;
}

int main()
{
    Building my;
    GoodGay(my);
    GoodF f;
    f.func(my);
    GoodF2 f2;
    f2.func();
}