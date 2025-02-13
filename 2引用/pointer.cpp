#include <iostream>
#include <cstring>
using namespace std;

void test03()
{
    char *p = "hahaha";
    char *&p1 = p;
    cout << p1 << endl;
}

void func(char *&tmp)
{
    tmp = (char *)malloc(64);
    memset(tmp, 0, 64);
    strcpy(tmp, "nb");
}

void test04()
{
    char *mp;
    func(mp);
    cout << mp << endl;
}

int main()
{
    test03();
    test04();
    return 0;
}