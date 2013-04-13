#include "stdafx.h"
#include "NewHandlerClass.h"
#include <iostream>
#include "NewHandlerAllocator.h"

using std::cout;
using std::endl;

NewHandlerClass::NewHandlerClass(void)
{
    cout << "Invoke NewHandlerClass::constructor" << endl;


}


NewHandlerClass::~NewHandlerClass(void)
{
    cout << "Invoke NewHandlerClass::deconstructor" << endl;
}

std::new_handler NewHandlerClass::set_new_handler(std::new_handler p) throw()
{
    cout << "Invoke NewHandlerClass::set_new_handler" << endl;
    new_handler old = current;
    current = p;

    return old;
}
std::new_handler NewHandlerClass::current = nullptr;

void* NewHandlerClass::operator new(std::size_t size) throw(std::bad_alloc)
{
    cout << "NewHandlerClass::operator new" << endl;

    NewHandlerAllocator h(std::set_new_handler(current));

    return ::operator new(size);
}

