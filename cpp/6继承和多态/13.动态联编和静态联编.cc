#include <iostream>
using namespace std;
class Animal
{
public:
    // 虚函数  告诉编译器这个函数要晚绑定
    virtual void speak()
    {
        cout << "Animal speak" << endl;
    }
};

class Dog : public Animal
{
public:
    virtual void speak()
    {
        cout << "Dog speak" << endl;
    }
};

void doLogin(Animal *animal)
{
    animal->speak();
}

void test01()
{
    Animal an;
    an.speak(); // 编译阶段就确定了调用speak这个函数
}

void test02()
{
    Dog *dog = new Dog;
    doLogin(dog);
}

int main()
{
    test01();
    test02();
    return 0;
}