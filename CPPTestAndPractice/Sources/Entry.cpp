#include <iostream>
#include "SingletonTest.h"

int main( )
{
    SingletonTest::GetInstance( ).PrintSomething( );
    SingletonTest::DestroyInstance( );
    return 0;
}