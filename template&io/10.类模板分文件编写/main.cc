
#include "Maker.h"
#include <string>
int main()
{
    Maker<string, int> m("wokong", 20);
    m.printMaker();
}