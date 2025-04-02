#include <iostream>
using namespace std;

// 抽象层
class rule
{
public:
    virtual int getnum(int a, int b) = 0;
    // 纯需函数
};

// 实现层
class plus_rule : public rule
{
public:
    virtual int getnum(int a, int b) // 重写父类的虚函数，依赖抽象层
    {
        return a + b;
    }
};

class miner_rule : public rule
{
public:
    virtual int getnum(int a, int b)
    {
        return a - b;
    }
};

// 业务层
int doLogin(rule *cal)
{
    int a = 10;
    int b = 20;
    int ret = cal->getnum(a, b);
    return ret;
}

void test()
{
    rule *r = NULL;
    r = new plus_rule;
    cout << doLogin(r) << endl;
    delete r;

    r = new miner_rule;
    cout << doLogin(r) << endl;
    delete r;
}

int main()
{
    test();
    return 0;
}