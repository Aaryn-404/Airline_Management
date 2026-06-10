#pragma once
#include "Route.h"
class RouteNode
{
private:
	Route *route;
	RouteNode* next;
public:
	RouteNode();
	RouteNode(Route *r);
	~RouteNode();

	Route* getRoute();
	RouteNode* getNext();

	void setNext(RouteNode* n);

};

