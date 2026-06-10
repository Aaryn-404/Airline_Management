#pragma once
#include "HostessNode.h"
class HostessContainer
{
private:
	HostessNode* node;
public:
	HostessContainer();
	HostessContainer(HostessNode* n);
	virtual ~HostessContainer();
	bool isEmpty();
	int size();
	void insertAtEnd(string id, string name, int age, string title, string phone, int grade);
	string toString();
	//MOSTRAR POR ID
	Hostess* findById(string id);
	//MODIFICAR
	void modifyHostess(string id, string n, int a, string t, string p, int g);
	//ELIMINAR
	bool deleteById(string id);
};

