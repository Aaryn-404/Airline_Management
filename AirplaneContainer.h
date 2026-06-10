#pragma once
#include "AirplaneNode.h"

class AirplaneContainer
{
private:
	AirplaneNode* node;
public:
	AirplaneContainer();
	AirplaneContainer(AirplaneNode* n);
	virtual ~AirplaneContainer();
	bool isEmpty();
	int size();
	// INGRESAR
	void insertAtEnd(string id, string cat);
	//MOSTRAR 
	string toString();
	//MOSTRAR POR ID
	Airplane* findById(string id);
	//ELIMINAR
	bool deleteById(string id);
};

