#include <iostream>
#include <memory>

#include "Proxy.h"
#include "Doc.h"

using namespace std;

int main()
{
    Document doc;

    doc.open();
    doc.changePage(4);
    doc.changePage(17);
    doc.changePage(24);
    doc.changePage(1);
    doc.changePage(37);
    

    return 0;
}