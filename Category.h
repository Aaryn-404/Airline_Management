#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class Category
{
private:
    struct infoCat{
        string category;
    string brand;
    string charge;
    int passenger;
    string military;
    string range;
    };
public:
    static const int n = 4;
    static infoCat categories[n];
    static void startCat();
    static string showInfo(string cat);
};

