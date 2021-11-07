#include <iostream>
#include <memory>

#include "Display.h"
#include "Page.h"

#ifndef proxy_h
#define proxy_h

using namespace std;

class Proxy : public Display 
{
    public:
    Proxy();
    ~Proxy();

    void displayText()  override;
    void displatImage() override;
    void displayEmpty() override;

    void setCurrentPage(int currentPage);
    const int getCurrentPage const;
    shared_ptr<Page> getPage();
    void displayContent(int page);

    int _currentPage;
    shared_ptr<Page> _page;
};

#endif