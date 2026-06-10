#pragma once
#include "FlightNode.h"
class FlightContainer
{
private:
	FlightNode* node;
public:
	FlightContainer();
	FlightContainer(FlightNode* n);

	virtual ~FlightContainer();
	bool isEmpty();
	int size();

	void insertAtEnd(int id, Route* route, string endDate, string exitHour, string arriveHour,
		string exitAirport, string arriveAirport, Pilot* pilot, Pilot* copilot,
		Airplane* airplane, int airplaneCapacity);

	string toString();
	//MOSTRAR POR ID
	Flight* findById(int id);
	//MODIFICAR
	void modifyFlight(int id, string newEndDate, string newExitHour, string newArriveHour,
		string newExitAirp, string newArriveAirp);
	//ELIMINAR
	bool deleteById(int id);
};

