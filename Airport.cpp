#include "Airport.h"
Airport::Airport(PersonContainer* pc, FlightContainer* fc, ReservationContainer* rc,
    AirplaneContainer* ac, RouteContainer* rcnt, HostessContainer* hc) {
    personContainer = pc;
    flightContainer = fc;
    reservationContainer = rc;
    airplaneContainer = ac;
    routeContainer = rcnt;
    hostessContainer = hc;
}

Airport::~Airport() {
    delete personContainer;
    delete flightContainer;
    delete reservationContainer;
    delete airplaneContainer;
    delete routeContainer;
    delete hostessContainer;
}

void Airport::addPassenger(string id, string name, int age) {
    personContainer->insertAtEnd(id, name, age);
}

void Airport::showPassengers() {
   cout<<personContainer->toString();
}

void Airport::modifyPassenger(string id, string newName, int newAge) {
    Passenger* passenger = personContainer->findPassengerById(id);
    if (passenger) {
        passenger->setName(newName);
        passenger->setAge(newAge);
    }
}

void Airport::deletePassenger(string id) {
    personContainer->deleteById(id);
}

void Airport::addFlight(int id, int routeId, string date, string departureTime,
    string arrivalTime, string departureAirport, string arrivalAirport,
    string airplaneId, string pilotId, string copilotId, int capacity) {
    Route* route = routeContainer->findById(routeId);
    Airplane* airplane = airplaneContainer->findById(airplaneId);
    Pilot* pilot = personContainer->findPilotById(pilotId);
    Pilot* copilot = personContainer->findPilotById(copilotId);
    if (route && airplane && pilot && copilot) {
        flightContainer->insertAtEnd(id, route, date, departureTime, arrivalTime, departureAirport, arrivalAirport, pilot, copilot, airplane, capacity);
    }
}

void Airport::showFlights() {
    cout << flightContainer->toString();
}

void Airport::modifyFlight(int id, string date, string departureTime,
    string arrivalTime, string departureAirport,
    string arrivalAirport) {
    flightContainer->modifyFlight(id, date, departureTime, arrivalTime, departureAirport, arrivalAirport);
}

void Airport::deleteFlight(int id) {
    flightContainer->deleteById(id);
}

void Airport::addReservation(int id, int flightId, string passengerId,
    string date, string time, bool isPaid) {
    Flight* flight = flightContainer->findById(flightId);
    Passenger* passenger = personContainer->findPassengerById(passengerId);
    if (!flight || !passenger) {
        return;
    }
    reservationContainer->insertAtEnd(id, flight, passenger, date, time, isPaid);
}

void Airport::showReservations() {
    cout << reservationContainer->toString();
}

void Airport::modifyReservation(int id, string date, string time, int flightId) {
    Flight* newFlight = flightContainer->findById(flightId);
    if (newFlight) {
        reservationContainer->modifyReservation(id, date, time, newFlight);
    }
}

void Airport::deleteReservation(int id) {
    reservationContainer->deleteById(id);
}
void Airport::showRoutes() {
    cout << routeContainer->toString();
}
void Airport::showCrew() {
    cout << hostessContainer->toString();
}
void Airport::showAirplanes() {
    cout << airplaneContainer->toString();
}
void Airport::modifyRoute(int id, string newOrigin, string newDestination, int newHour, int newMin, int newScale, int newCost) {
    routeContainer->modifyRoute(id, newOrigin, newDestination, newHour, newMin, newScale, newCost);
}
void Airport::addRoute(int id, string origin, string destination, int hour, int minute, int scale, int cost) {
    routeContainer->insertAtEnd(id, origin, destination, hour, minute, scale, cost);
}
void Airport::modifyCrewMember(string id, string newName, int newAge, string newTitle, string newPhone, int newGrade) {
    Hostess* hostess = hostessContainer->findById(id);
    if (hostess) {
        hostess->setName(newName);
        hostess->setAge(newAge);
        hostess->setTitle(newTitle);
        hostess->setPhone(newPhone);
        hostess->setGrade(newGrade);
    }
}
void Airport::deleteRoute(int id) {
    routeContainer->deleteById(id);
}
void Airport::deleteCrewMember(string id) {
    hostessContainer->deleteById(id);
}
void Airport::addAirplane(string id, string model) {
    airplaneContainer->insertAtEnd(id, model);
}
void Airport::deleteAirplane(string id) {
    airplaneContainer->deleteById(id);
}
void Airport::addCrewMember(string id, string n, int a, string t, string p, int g) {
    hostessContainer->insertAtEnd(id, n, a, t, p, g);
}
void Airport::addPilot(string id, string name, int age, string mail, char gender) {
    personContainer->insertPilotAtEnd(id, name, age, mail, gender);
}
void Airport::showPilotById(string id) {
    cout<<personContainer->findPilotById(id)->toString();
}