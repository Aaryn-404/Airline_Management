#pragma once
#include "Hostess.h"
class HostessNode
{
private:
	Hostess* hostess;
	HostessNode* next;
public:
	HostessNode();
	HostessNode(Hostess* h);
	~HostessNode();

	Hostess* getHostess();
	HostessNode* getNext();

	void setNext(HostessNode* n);

};

