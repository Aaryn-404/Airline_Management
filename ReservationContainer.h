#pragma once
#include "ReservationNode.h"
class ReservationContainer
{
private:
	ReservationNode* node;
public:
	ReservationContainer();
	ReservationContainer(ReservationNode* n);

	virtual ~ReservationContainer();
	bool isEmpty();
	int size();

	void insertAtEnd(int id, Flight* flight, Passenger* passenger, string date, string time, bool isPaid);

	string toString();
	//MOSTRAR POR ID
	Reservation* findById(int id);
	//MODIFICAR
	void modifyReservation(int id, string newDate, string newTime, Flight* newFlight);
	//ELIMINAR
	bool deleteById(int id);
	string getPassengersByFlight(Flight* flight);
};

