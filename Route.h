#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class Route
{
private:
	int id;
	string origin;
	string destination;
	int dHour;
	int dMin;
	int scale; // Parada Intermediaria
	int ticketCost; // Pasaje
public:
	Route();
	Route(int i, string o, string dest, int hours, int minutes, int s, int cost);
	~Route();

	int getId();
	string getOrigin();
	string getDestination();
	int getDHour();
	int getDMin();
	int getScale();
	int getTicketCost();

	void setId(int i);
	void setOrigin(string o);
	void setDestination(string dest);
	void setDHour(int hours);
	void setDMin(int minutes);
	void setScale(int s);
	void setTicketCost(int cost);

	string toString();
};

