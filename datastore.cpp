#pragma once
#include <time.h>
#include <stdlib.h>

#include "datastore.h"

template<class T>
DataStore<T>::DataStore()
{
}


template<class T>
vector<DataSet<T>>* DataStore<T>::getDataSet() {
    return &dataSets;
}


