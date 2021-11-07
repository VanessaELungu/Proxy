#include <iostream>

#include "Proxy.h"

using namespace std;

Proxy::Proxy()
{
    cout << "" << endl;
    _page = NULL;
}

Proxy::~Proxy()
{
    cout << "" << endl;
}

shared_ptr<Page> Proxy::getPage()
{
    if (NULL == _page)
    {
        _page = make_shared<Page>();
    }
    return _page;
}

void Proxy::setCurrentPage(int currentPage)
{
    _currentPage = currentPage;
}

const int Proxy::getCurrentPage()
{
    return _currentPage;
}

void Proxy::displayContent(int pageNumber) {

setCurrentPage(pageNumber);

cout << endl << "On page" << getCurrentPage() << ":" << endl;

switch (pageNumber)

{

case 1:

getPage()->displayText();

break;

case 24:

getPage()->displayText();

getPage()->displayImage();

break;

case 37:
getPage()->displayImage();

break;

 

default:

getPage()->displayEmpty();

break;

}

cout << endl;

}

void Proxy::displayText() {}

void Proxy::displayImage() {}

void Proxy::displayEmpty() {}
