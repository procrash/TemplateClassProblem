#pragma once
#include "datastore.h"
#include "datastore.cpp"

#include "b.h"
#include "b.cpp"

#include "c.h"
#include "c.cpp"

template<class T>
class A
{
private:
    DataStore<T>* dataStorePtr;
    B<T> b;
    C<T> c;
public:
    A();
};

