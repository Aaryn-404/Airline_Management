#pragma once
#include "Reservation.h"
class ReservationNode
{
private:
	Reservation* reservation;
	ReservationNode* next;
public:
	ReservationNode();
	ReservationNode(Reservation* r);
	~ReservationNode();

	Reservation* getReservation();
	ReservationNode* getNext();

	void setNext(ReservationNode* n);

};

