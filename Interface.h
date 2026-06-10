#pragma once
#include <cstdlib>
#include "Airport.h"
class Interface
{
public:
    static void managePassengers(Airport* airport);
    static void manageCrew(Airport* airport);
    static void manageFleet(Airport* airport);
    static void manageRoutes(Airport* airport);
    static void manageFlights(Airport* airport);
    static void manageReservations(Airport* airport);
    static void displayMenu(Airport* airport);
};

