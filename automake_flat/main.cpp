#include <iostream>
#include "mytest.h"

int main(int argc, char *argv[])
{
    Mytest t(10);
    
    std::cout << t.GetID() << std::endl;  
    return 0;
}
