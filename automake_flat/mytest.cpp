#include "mytest.h"
Mytest::Mytest(int id) : id(id)
{
}

Mytest::~Mytest()
{
}

int Mytest::GetID(void)
{
    return this->id;
}
