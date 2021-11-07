#include <iostream> 

#include "Doc.h"
#include "Proxy.h"

using namespace std;

void Document::initProxy(){};

Document::Document()
{
    cout << "" << endl;
    initProxy();
}

Document::~Document()
{
    cout << "" << endl;
}

void Document::open(int pageNumber)
{
    _proxy.displayContent(pageNumber);
}

void Document::changePage(int pageNumber)
{
    _proxy.displayContent(pageNumber);
}
