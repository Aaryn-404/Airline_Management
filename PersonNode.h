#pragma once
#include "Person.h"
class PersonNode
{
private:
	Person* person;
	PersonNode* next;
public:
	PersonNode();
	PersonNode(Person* p);
	~PersonNode();

	Person* getPerson();
	PersonNode* getNext();

	void setNext(PersonNode* n);

};

