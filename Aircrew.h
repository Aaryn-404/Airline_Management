#pragma once
#include "Person.h"
class Aircrew:public Person
{
public:
	Aircrew();
	Aircrew(string i, string n, int a);
	~Aircrew();
	string toString() override;
};

