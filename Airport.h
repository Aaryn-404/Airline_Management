#pragma once
#include "PersonContainer.h"
#include "FlightContainer.h"
#include "ReservationContainer.h"
#include "AirplaneContainer.h"
#include "RouteContainer.h"
#include "HostessContainer.h"
class Airport
{
private:
    PersonContainer* personContainer;
    FlightContainer* flightContainer;
    ReservationContainer* reservationContainer;
    AirplaneContainer* airplaneContainer;
    RouteContainer* routeContainer;
    HostessContainer* hostessContainer;

public:
    Airport(PersonContainer* pc, FlightContainer* fc, ReservationContainer* rc, AirplaneContainer* ac, RouteContainer* rcnt, HostessContainer* hc);
    ~Airport();

    void addPassenger(string id, string name, int age);
    void showPassengers();
    void modifyPassenger(string id, string newName, int newAge);
    void deletePassenger(string id);

    void addFlight(int id, int routeId, string date, string departureTime,
         string arrivalTime, string departureAirport, string arrivalAirport,
         string airplaneId, string pilotId, string copilotId, int capacity);
    void showFlights();
    void modifyFlight(int id, string date, string departureTime,
        string arrivalTime, string departureAirport,
        string arrivalAirport);
    void deleteFlight(int id);

    void addReservation(int id, int flightId, string passengerId,
        string date, string time, bool isPaid);
    void showReservations();
    void modifyReservation(int id, string date, string time, int flightId);
    void deleteReservation(int id);

    void showRoutes();
    void showCrew();
    void showAirplanes();
    void modifyRoute(int id, string newOrigin, string newDestination, int newHour, int newMin, int newScale, int newCost);
    void addRoute(int id, string origin, string destination, int hour, int minute, int scale, int cost);
    void modifyCrewMember(string id, string newName, int newAge, string newTitle, string newPhone, int newGrade);
    void deleteRoute(int id);
    void deleteCrewMember(string id);
    void addAirplane(string id, string model);
    void deleteAirplane(string id);
    void addCrewMember(string id, string n, int a, string t, string p, int g);
    void addPilot(string id, string name, int age, string mail, char gender);
    void showPilotById(string id);
};

