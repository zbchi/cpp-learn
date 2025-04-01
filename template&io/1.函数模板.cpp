#include <iostream>
using namespace std;

// T代表泛型的数据类型
template <class T> // 让编译器看到这句话后面紧跟着的函数里有T不要报错
void mySwap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <class T>
void mySwap2()
{
}
// 使用函数模板
void test02()
{
    int a = 10;
    int b = 20;

    // 编译器会根据实参来自动推倒数据类型,
    mySwap(a, b); // 编译器在函数模板被调用时，进行第二次编译替换
    /*
    void mySwap(int &a,int &b)
    {
    }
    */

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    char c = 'c';
    // mySwap(a,c);  err 数据类型要一致

    // 2.显示的指定类型
    mySwap<int>(a, b); //<>用参数列表告诉编译器我只传int类型

    // mySwap<double>(a,b);  //指定的类型，传入时不能不一致

    mySwap<>(a, b);

    mySwap2<int>(); // 调用时必须让编译器知道泛型T具体是什么类型
}

template <class T>
T func(T a, T b)
{
    return a + b;
}

void test03()
{
    int a = 10;
    double b = 20.2;

    // 如果使用参数列表指定数据类型，那么实参可以隐式转换
    cout << func<int>(a, b) << endl;
}

template <class T>
void mySort(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int max = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[max] < arr[j])
            {
                max = j;
            }
        }

        if (max != i)
        {
            mySwap(arr[max], arr[i]);
        }
    }
}

template <class T>
void myPrint(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test04()
{
    char arrchar[] = "hello world";
    int len = sizeof(arrchar) / sizeof(char);
    mySort(arrchar, len);
    myPrint(arrchar, len);

    int arrint[] = {3, 2, 5, 25, 345, 34, 4356, 436, 436, 34};
    mySort(arrint, len);
    myPrint(arrint, len);
}

int main()
{
    test02();
    test03();
    test04();
    return 0;
}