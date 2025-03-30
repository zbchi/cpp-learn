#include <iostream>
using namespace std;

#define ADD(x, y) x + y
// 内联函数
// 加上inline可能成为内联函数
inline int Add(int x, int y)
{
    return x + y;
}

void test07()
{
    int ref = ADD(10, 20) * 2;
    cout << ref << endl;
    int ref2 = Add(10, 20) * 2;
    cout << ref2 << endl;
}

#define COMAPD(x, y) ((x) < (y) ? (x) : (y))
inline int func(int x, int y)
{
    return x < y ? x : y;
}

void test08()
{
    int a = 1;
    int b = 3;
    //             ((++a)<(b)?(++a):(b))
    // cout << COMAPD(++a, b) << endl; // 3
    cout << func(++a, b) << endl;
}
int main()
{
    test07();
    test08();
    return 0;
}