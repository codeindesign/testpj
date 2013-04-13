#include "stdafx.h"
#include "NewHandlerAllocator.h"

NewHandlerAllocator::NewHandlerAllocator(std::new_handler handler) : handler(handler)
{ }

NewHandlerAllocator::~NewHandlerAllocator()
{
    std::set_new_handler(this->handler);
}