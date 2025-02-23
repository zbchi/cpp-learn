#include <iostream>
#include "MyArray.h"
using namespace std;

void printMyArray(MyArray &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr.get(i) << " ";
    }
    cout << endl;
}
void test01()
{
    MyArray arr(20, 1);
    printMyArray(arr);
    //
    for (int i = 0; i < arr.size(); i++)
    {
        arr.get(i) = i + 100;
    }
    printMyArray(arr);

    // 指定位置修改
    arr.set(2, 0);
    printMyArray(arr);

    // 测试浅拷贝
    MyArray arr2 = arr;
    printMyArray(arr2);
}

void test02()
{
    MyArray arr;
    for (int i = 0; i < 10; i++)
        arr.pushBack(i + 10);

    for (int i = 0; i < 9; i++)
        arr.pushFront(i + 20);

    arr.insert(10, 10000);

    printMyArray(arr);

    arr.popBack();
    arr.popFront();

    printMyArray(arr);
}

int main()
{
    test01();
    test02();
}