#pragma once
#include <new>
class NewHandlerClass
{
public:
    NewHandlerClass(void);
    ~NewHandlerClass(void);

    static void* operator new(std::size_t size) throw(std::bad_alloc);
    static std::new_handler set_new_handler(std::new_handler p) throw();
    static std::new_handler current;
};

