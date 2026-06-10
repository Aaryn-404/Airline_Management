#pragma once
#include "Pilot.h"
#include "Passenger.h"
#include "PersonNode.h"
class PersonContainer
{
private:
	PersonNode* node;
public:
	PersonContainer();
	PersonContainer(PersonNode* n);
	virtual ~PersonContainer();
	bool isEmpty();
	int size();
	void insertPilotAtEnd(string id, string name, int age, string mail, char gender);
	Pilot* findPilotById(string id);
	Passenger* findPassengerById(string id);
	// INGRESAR
	void insertAtEnd(string id, string name, int age);
	//MOSTRAR 
	string toString();
	//MOSTRAR POR ID
	Person* findById(string id);
	//MODIFICAR
	void modifyPerson(string id, string n, int a);
	//ELIMINAR
	bool deleteById(string id);
};
