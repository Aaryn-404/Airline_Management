#pragma once
#include "Airplane.h"
class AirplaneNode
{
private:
	Airplane* airplane;
	AirplaneNode* next;
public:
	AirplaneNode();
	AirplaneNode(Airplane* h);
	~AirplaneNode();

	Airplane* getAirplane();
	AirplaneNode* getNext();

	void setNext(AirplaneNode* n);

};

