#include <iostream>

#ifndef display_h
#define display_h

using namespace std;

class Display
{
    public:

    virtual ~Display(){};

    virtual void displayText()  = 0;
    virtual void displatImage() = 0;
    virtual void displayEmpty() = 0;

};

#endif