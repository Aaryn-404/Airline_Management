cmake_minimum_required(VERSION 4.2)
project(Airline_Management)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Airline_Management
        Aircrew.cpp
        Aircrew.h
        Airplane.cpp
        Airplane.h
        AirplaneContainer.cpp
        AirplaneContainer.h
        AirplaneNode.cpp
        AirplaneNode.h
        Airport.cpp
        Airport.h
        Category.cpp
        Category.h
        Flight.cpp
        Flight.h
        FlightContainer.cpp
        FlightContainer.h
        FlightNode.cpp
        FlightNode.h
        Hostess.cpp
        Hostess.h
        HostessContainer.cpp
        HostessContainer.h
        HostessNode.cpp
        HostessNode.h
        Interface.cpp
        Interface.h
        main.cpp
        Passenger.cpp
        Passenger.h
        Person.cpp
        Person.h
        PersonContainer.cpp
        PersonContainer.h
        PersonNode.cpp
        PersonNode.h
        Pilot.cpp
        Pilot.h
        Reservation.cpp
        Reservation.h
        ReservationContainer.cpp
        ReservationContainer.h
        ReservationNode.cpp
        ReservationNode.h
        Route.cpp
        Route.h
        RouteContainer.cpp
        RouteContainer.h
        RouteNode.cpp
        RouteNode.h)
