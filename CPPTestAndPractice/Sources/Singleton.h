#pragma once
#include <iostream>

template <class T>
class Singleton
{
public:
    static T& GetInstance( )
    {
        if ( Singleton::Instance == nullptr )
        {
            Singleton::Instance = new T( );
        }

        return ( *Singleton::Instance );
    }

    static void DestroyInstance( )
    {
        if ( Singleton::Instance != nullptr )
        {
            delete Singleton::Instance;
            Singleton::Instance = nullptr;
            std::cout << "Singleton Destroy" << std::endl;
        }
    }

protected:
    Singleton( ){ }

private:
    static T* Instance;

};

template <class T>
T* Singleton<T>::Instance = nullptr;