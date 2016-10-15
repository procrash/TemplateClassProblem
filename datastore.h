#pragma once

#include <vector>
#include "dataset.h"

using namespace std;

template<class T>
class DataStore
{
private:
    vector<DataSet<T>> dataSets;
public:
    DataStore();

    void clearData();

    vector<DataSet<T>>* getDataSet();
};





