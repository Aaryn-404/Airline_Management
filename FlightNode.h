#pragma once
#include "Flight.h"
class FlightNode
{
private:
	Flight* flight;
	FlightNode* next;
public:
	FlightNode();
	FlightNode(Flight* f);
	~FlightNode();

	Flight* getFlight();
	FlightNode* getNext();

	void setNext(FlightNode* n);

};

