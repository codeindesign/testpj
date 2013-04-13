#ifndef _NEWHANDLERALLOCATOR_H_
#define _NEWHANDLERALLOCATOR_H_
#include <new>

class NewHandlerAllocator
{
public:
    NewHandlerAllocator(std::new_handler handler);
    ~NewHandlerAllocator();

private:
    std::new_handler handler;

    // Hide the copy constructor and copy assignment operator
    NewHandlerAllocator(const NewHandlerAllocator& rhs); 
    NewHandlerAllocator& operator =(const NewHandlerAllocator& rhs);
};

#endif 