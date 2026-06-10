#pragma once
#include <iostream>
#include <sstream>
#include "Category.h"
using namespace std;
class Airplane {
private:
    string id;
    string category;

public:
    Airplane();
    Airplane(string i, string cat);
    string getId();
    string toString();
};

