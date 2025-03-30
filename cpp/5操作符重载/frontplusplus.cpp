#include <iostream>
using namespace std;

class Maker
{
    friend ostream &operator<<(ostream &out, const Maker &m);

public:
    Maker(int a)
    {
        this->a = a;
    }

    // 前置++
    Maker &operator++()
    {
        ++a;
        return *this;
    }

    // 后置++
    Maker operator++(int)
    {
        Maker tmp(*this); //*this里的a为2
        ++this->a;
        return tmp;
    }

private:
    int a;
};

ostream &operator<<(ostream &out, const Maker &m)
{
    cout << m.a << endl;
    return out;
}

void test()
{
    Maker m1(1);
    cout << m1;
    cout << ++m1;
    cout << m1++;//返回拷贝的tmp对象
    cout << m1;//返回++this->a对象

    //同等条件下优先前置++
}
int main()
{
    test();
    return 0;
}





