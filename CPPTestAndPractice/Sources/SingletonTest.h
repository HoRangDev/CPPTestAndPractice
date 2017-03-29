#pragma once
#include "Singleton.h"

class SingletonTest : public Singleton<SingletonTest>
{
public:
    void PrintSomething( );

private:
    SingletonTest( ){ }
    friend Singleton;

};