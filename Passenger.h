#pragma once
#include "Person.h"
class Passenger : public Person
{
public:
	Passenger();
	Passenger(string i, string n, int a);
	~Passenger();
	string toString() override;
};

