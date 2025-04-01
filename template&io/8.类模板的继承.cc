#include <iostream>
using namespace std;

template <class T>
class Father
{
public:

    T m;
};

class Son : public Father<int>//要告诉编译器父类的泛型数据类型具体是什么类型
{
    public:

};

template<class T1,class T2>
class Son2:public Father<T2>
{

};

void test()
{
    Son2 <int,string>s;
}