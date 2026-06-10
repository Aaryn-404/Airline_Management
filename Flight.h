#pragma once
#include "Route.h"
#include "Pilot.h"
#include "Airplane.h"
#include "Passenger.h"
#include "HostessContainer.h"
class Flight
{
private:
    int id;
    Route* route;
    string endDate;
    string exitHour;
    string arriveHour;
    string exitAirport;
    string arriveAirport;
    Pilot* pilot;
    Pilot* copilot;
    Hostess* hostessList[3];
    Airplane* airplane;
    Passenger* passengerList[100];
    int nPassenger;
    int freeSeats;
    int occupiedSeats;

public:
    Flight(int i,Route* route, string endDate, string exitHour, string arriveHour, string exitAirport, 
        string arriveAirport, Pilot* pilot, Pilot* copilot, Airplane* airplane, int airplaneCapacity);
    ~Flight();
    int getFreeSeats();
    int getOccupiedSeats();
    int getId();

    void addPassenger(Passenger* passenger);
    void deletePassenger(string idPassenger);
    void showPassengerList();
    
    void addHostess(Hostess* hostess);
    void deleteHostess(string id);
    string showHostessList();

    void modifyFlight(string newEndDate, string newExitHour, string newArriveHour, string newExitAirp, string newArriveAirp);
    string toString();
};

