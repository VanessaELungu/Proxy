#include <iostream>
#include <memory>

#include "Proxy.h"

#ifndef doc_h
#define doc_h

using namespace std;

class Document
{
    public:
    Document();
    ~Document();
    
    void open(int page);
    void initProxy();
    void changePage(int number);

    
};

#endif
