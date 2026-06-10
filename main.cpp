#include <iostream>
#include "Airport.h"
#include "Interface.h"
#include "Category.h"
using namespace std;
int main()
{
    Category::startCat();
    AirplaneContainer* airplaneContainer = new AirplaneContainer();

    airplaneContainer->insertAtEnd("A100", "AI-19");
    airplaneContainer->insertAtEnd("B200", "BO-73");
    airplaneContainer->insertAtEnd("C300", "ANT-1");
    airplaneContainer->insertAtEnd("D400", "AI-20");
    airplaneContainer->insertAtEnd("A110", "AI-19");
    airplaneContainer->insertAtEnd("B210", "BO-73");
    airplaneContainer->insertAtEnd("C310", "ANT-1");
    airplaneContainer->insertAtEnd("D410", "AI-20");
    airplaneContainer->insertAtEnd("A000", "AI-19");

    PersonContainer* personContainer = new PersonContainer();
    FlightContainer* flightContainer = new FlightContainer();
    ReservationContainer* reservationContainer = new ReservationContainer();
    RouteContainer* routeContainer = new RouteContainer();
    HostessContainer* hostessContainer = new HostessContainer();

    Airport* airport = new Airport(personContainer, flightContainer, reservationContainer, airplaneContainer, routeContainer, hostessContainer);

    Interface* interface = new Interface();

    interface->displayMenu(airport);

    delete airport;
    delete interface;
    return 0;
}
