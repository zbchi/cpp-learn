#include <iostream>
using namespace std;
#include <string>
class car
{
public:
    void init()
    {
        type = "BMW";
        size = 5;
        color = "white";
    }
    void printCar()
    {
        cout << "type:" << type << endl;
        cout << "size:" << size << endl;
        cout << "color:" << color << endl;
    }

private:
    string type;
    int size;
    string color;
};

class sonCar : public car
{
public:
    void setType(string Type)
    {
        type = Type;
    }
    void setmyT(int t)
    {
        myT = t;
    }
    void setmyNum(int n)
    {
        myNum = n;
    }

    // 读
    string getT()
    {
        return type;
    }

    int getmyT()
    {
        return myT;
    }
    int getmyNum()
    {
        return myNum;
    }

    // 打印
    void printSonCar()
    {
        cout << "type:" << type << endl;
        cout << "T:" << myT << endl;
        cout << "num:" << myNum << endl;

        car::init();
        car::printCar();
    }

private:
    string type;
    int myT;
    int myNum;
};

void test01()
{
    car c;
    c.init();
    c.printCar();
}

void test02()
{
    sonCar sc;
    sc.setType("dongfang");
    sc.setmyT(20);
    sc.setmyNum(8);
    sc.printSonCar();
}
int main()
{
    test01();
    cout << endl;
    test02();
    return 0;
}
