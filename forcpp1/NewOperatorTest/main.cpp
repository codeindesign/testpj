// NewOperatorTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "NewHandlerClass.h"
#include <new>
#include <iostream>

void OutOfMemory1(void);

int _tmain(int argc, _TCHAR* argv[])
{
    NewHandlerClass::set_new_handler(OutOfMemory1);
    NewHandlerClass *newHandler = new NewHandlerClass();

    getchar();

    return 0;
}

void OutOfMemory1(void)
{
    std::cout << "OutOfMemory1" << std::endl;

    std::set_new_handler(nullptr);
}

