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
    
    void open(int page = 1);
    void initProxy();
    void changePage(int pageNumber);

    Proxy _proxy;
};

#endif
