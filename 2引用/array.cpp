#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    // 1.定义数组类型
    typedef int(MY_ARR)[5]; // 数组类型
    // 2.建立引用
    MY_ARR &arref = arr; // 建立引用

    // 或者直接定义引用
    int(&arref2)[5] = arr;

    // 或者
    typedef int(&MY_ARR3)[5]; // 建立引用数组类型
    MY_ARR3 arref3 = arr;

    for (int i = 0; i < 5; i++)
    {
        arref2[i] += 100;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arref[i] << "\n";
    }

    return 0;
}