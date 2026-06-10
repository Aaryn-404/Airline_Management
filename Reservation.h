#pragma once
#include "Flight.h"
#include "Passenger.h"
class Reservation
{
private:
    int id;
    Flight* flight;
    Passenger* passenger;
    string date;
    string time;
    bool isPaid;

public:
    Reservation(int i, Flight* fl, Passenger* p, string d, string t, bool iP);
    ~Reservation();

    int getId();
    Flight* getFlight();
    Passenger* getPassenger();
    string getDate();
    string getTime();
    bool getIsPaid();

    void markAsPaid();
    void modifyReservation(string newDate, string newTime, Flight* newFlight);
    string printTicket();
    string toString();
};

