#include <iostream>

#include "Page.h"

using namespace std;

Page::Page()
{
    cout << "" << endl;
}

Page::~Page()
{
    cout << endl << "" << endl;
}

void Page::displayText()
{
    cout << "Display text" << endl; 
}

void Page::displayImage()
{
    cout << "Dispaly image" << endl;
}

void Page::displayEmpty()
{
    cout << "Sorry" << endl;
}