#include <iostream>
using namespace std;
class cube
{
private:
    int ml;
    int mw;
    int mh;

public:
    void init()
    {
        ml = 0;
        mw = 0;
        mh = 0;
    }
    void setl(int l)
    {
        ml = l;
    }
    void setw(int w)
    {
        mw = w;
    }
    void seth(int h)
    {
        mh = h;
    }

    // get
    int getl()
    {
        return ml;
    }
    int getw()
    {
        return mw;
    }
    int geth()
    {
        return mh;
    }

    int caculateS()
    {
        return 2 * (ml * mw + ml * mh + mw * mh);
    }

    int caculateV()
    {
        return ml * mw * mh;
    }

    bool compareCube(cube &cube)
    {
        if (getl() == cube.getl() && getw() == cube.getw() && geth() == cube.geth())
            return true;
        else
            return false;
    }
};

bool isCompareCube(cube &c1, cube &c2)
{
    if (c1.geth() == c2.geth() && c1.getl() == c2.getl() && c1.getw() == c2.getw())
        cout << "=====" << endl;
    else
        cout << "!=" << endl;
}
int main()
{
    cube c1, c2;
    c1.init();
    c2.init();

    c1.setl(10);
    c1.setw(20);
    c1.seth(30);
    c2.setl(10);
    c2.setw(20);
    c2.seth(30);

    if (c1.compareCube(c2))
    {
        cout << "==========" << endl;
    }
    return 0;
}