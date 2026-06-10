#pragma once
#include "RouteNode.h"
 
class RouteContainer
{
private:
	RouteNode* node;
public:
	RouteContainer();
	RouteContainer(RouteNode* n);
	virtual ~RouteContainer();
	bool isEmpty();
	int size();

	// INGRESAR
	void insertAtEnd(int id, string origin, string destination, int dHour, int dMin, int scale, int ticketCost);
	//MOSTRAR 
	string toString();
	//MOSTRAR POR ID
	Route* findById(int id);
	//MODIFICAR
	void modifyRoute(int id, string o, string d, int h, int m, int sc, int cost);
	//ELIMINAR
	bool deleteById(int id);
};

