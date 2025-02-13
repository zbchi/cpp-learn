#include <iostream>
using namespace std;

int myFunc(int a, int b = 0)
{
    return a + b;
}

void test09()
{
    // 默认参数
    cout << myFunc(10, 20) << endl;
    cout << myFunc(10) << endl;
}


//默认参数后面都必须是默认参数
        //int myFunc2(int a,int b=0,int c)


//函数的声明和实现不能同时有函数的默认参数
void myFunc3(int a,int b);
void myFunc3(int a,int b=0)
{}


int main()
{
    test09();
    return 0;
}  