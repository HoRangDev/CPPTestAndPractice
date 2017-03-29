#pragma once
#include "Singleton.h"

class SingletonTest : public Singleton<SingletonTest>
{
    friend Singleton;
public:
    void PrintSomething( );

private:
    SingletonTest( ){ }
    ~SingletonTest( ){ }

};