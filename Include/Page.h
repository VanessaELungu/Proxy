#include <iostream>

#include "Display.h"

#ifndef page_h
#define page_h

using namespace std;

class Page : public Display 
{
    public:
    Page();
    ~Page();

    void displayText()  override;
    void displayImage() override;
    void displayEmpty() override;
};

#endif