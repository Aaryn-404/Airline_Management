#include "Interface.h"
void Interface::managePassengers(Airport* airport) {
    int option;
    do {
        cout << "\nGestion de Pasajeros" << endl;
        cout << "1. Ingresar pasajero" << endl;
        cout << "2. Visualizar pasajeros" << endl;
        cout << "3. Modificar pasajero" << endl;
        cout << "4. Eliminar pasajero" << endl;
        cout << "5. Volver al menu principal" << endl;
        cout << "Seleccione una opcion: ";
        cin >> option;

        string id, name;
        int age;

        switch (option) {
        case 1:
            cout << "Ingrese ID: "; cin >> id;
            cout << "Ingrese Nombre: "; cin >> name;
            cout << "Ingrese Edad: "; cin >> age;
            airport->addPassenger(id, name, age);
            break;
        case 2:
            airport->showPassengers();
            break;
        case 3:
            cout << "Ingrese ID del pasajero a modificar: "; cin >> id;
            cout << "Ingrese nuevo nombre: "; cin >> name;
            cout << "Ingrese nueva edad: "; cin >> age;
            airport->modifyPassenger(id, name, age);
            break;
        case 4:
            cout << "Ingrese ID del pasajero a eliminar: "; cin >> id;
            airport->deletePassenger(id);
            break;
        }
    } while (option != 5);
}
void Interface::manageCrew(Airport* airport) {
    int option;
    do {
        cout << "\nGestion de Tripulacion" << endl;
        cout << "1. Ingresar tripulante" << endl;
        cout << "2. Ingresar piloto y copiloto" << endl;
        cout << "3. Visualizar tripulacion" << endl;
        cout << "4. Visualizar piloto por Id" << endl;
        cout << "5. Modificar tripulante" << endl;
        cout << "6. Eliminar tripulante" << endl;
        cout << "7. Volver al menu principal" << endl;
        cout << "Seleccione una opcion: ";
        cin >> option;

        string id, name, title, phone, mail;
        int age,grade;
        char gender;

        switch (option) {
        case 1:
            cout << "Ingrese ID: "; cin >> id;
            cout << "Ingrese Nombre: "; cin >> name;
            cout << "Ingrese Edad: "; cin >> age;
            cout << "Ingrese titulo: "; cin >> title;
            cout << "Ingrese telefono: "; cin >> phone;
            cout << "Ingrese grado: "; cin >> grade;
            airport->addCrewMember(id, name, age, title, phone, grade);
            
            break;
        case 2:
            cout << "Ingrese ID: "; cin >> id;
            cout << "Ingrese Nombre: "; cin >> name;
            cout << "Ingrese Edad: "; cin >> age;
            cout << "Ingrese correo: "; cin >> mail;
            cout << "Ingrese genero (F/M): "; cin >> gender;
            airport->addPilot(id, name, age, mail, gender);
            break;
        case 3:
            airport->showCrew();
            break;
        case 4:
            cout << "Ingrese ID del piloto a mostrar: "; cin >> id;
            airport->showPilotById(id);
            break;
        case 5:
            cout << "Ingrese ID del sobrecargo a modificar: "; cin >> id;
            cout << "Ingrese nuevo nombre: "; cin >> name;
            cout << "Ingrese nuevo telefono: "; cin >> phone;
            cout << "Ingrese nueva edad: "; cin >> age;
            cout << "Ingrese nuevo titulo: "; cin >> title;
            cout << "Ingrese nuevo grado: "; cin >> grade;
            airport->modifyCrewMember(id, name, age, title, phone, grade);
            break;
        case 6:
            cout << "Ingrese ID del sobrecargo a eliminar: "; cin >> id;
            airport->deleteCrewMember(id);
            break;
        }
    } while (option != 7);
}

void Interface::manageFleet(Airport* airport) {
    int option;
    do {
        cout << "\nGestion de Flota" << endl;
        cout << "1. Ingresar avion" << endl;
        cout << "2. Visualizar aviones" << endl;
        cout << "3. Eliminar avion" << endl;
        cout << "4. Volver al menu principal" << endl;
        cout << "Seleccione una opcion: ";
        cin >> option;

        string id, model;

        switch (option) {
        case 1:
            cout << "Ingrese ID del avion: "; cin >> id;
            cout << "Ingrese Modelo del avion: "; cin >> model;
            airport->addAirplane(id, model);
            break;
        case 2:
            airport->showAirplanes();
            break;
        case 3:
            cout << "Ingrese ID del avion a eliminar: "; cin >> id;
            airport->deleteAirplane(id);
            break;
        }
    } while (option != 4);
}

void Interface::manageRoutes(Airport* airport) {
    int option;
    do {
        cout << "\nGestion de Rutas" << endl;
        cout << "1. Ingresar ruta" << endl;
        cout << "2. Visualizar rutas" << endl;
        cout << "3. Modificar ruta" << endl;
        cout << "4. Eliminar ruta" << endl;
        cout << "5. Volver al menu principal" << endl;
        cout << "Seleccione una opcion: ";
        cin >> option;

        int id, hour, minutes, scale, cost;
        string origin, destination;

        switch (option) {
        case 1:
            cout << "Ingrese ID de la ruta: "; cin >> id;
            cout << "Ingrese origen: "; cin >> origin;
            cout << "Ingrese destino: "; cin >> destination;
            cout << "Ingrese duracion en horas: "; cin >> hour;
            cout << "Ingrese duracion en minutos: "; cin >> minutes;
            cout << "Ingrese cantidad de escalas: "; cin >> scale;
            cout << "Ingrese costo: "; cin >> cost;
            airport->addRoute(id, origin, destination, hour, minutes, scale, cost);
            break;
        case 2:
            airport->showRoutes();
            break;
        case 3:
            cout << "Ingrese ID de la ruta a modificar: "; cin >> id;
            cout << "Ingrese nuevo origen: "; cin >> origin;
            cout << "Ingrese nuevo destino: "; cin >> destination;
            cout << "Ingrese nueva duracion en horas: "; cin >> hour;
            cout << "Ingrese nueva duracion en minutos: "; cin >> minutes;
            cout << "Ingrese nueva escala: "; cin >> scale;
            cout << "Ingrese nuevo costo: "; cin >> cost;
            airport->modifyRoute(id, origin, destination, hour, minutes, scale, cost);
            break;
            
        case 4:
            cout << "Ingrese ID de la ruta a eliminar: "; cin >> id;
            airport->deleteRoute(id);
            break;
        }
    } while (option != 5);
}

void Interface::manageFlights(Airport* airport) {
    int option;
    do {
        cout << "\nGestion de Vuelos" << endl;
        cout << "1. Ingresar vuelo" << endl;
        cout << "2. Visualizar vuelos" << endl;
        cout << "3. Modificar vuelo" << endl;
        cout << "4. Eliminar vuelo" << endl;
        cout << "5. Volver al menu principal" << endl;
        cout << "Seleccione una opcion: ";
        cin >> option;

        int id, capacity, routeId;
        string date, departureTime, arrivalTime, departureAirport, arrivalAirport;
        string airplaneId, pilotId, copilotId;

        switch (option) {
        case 1:
            cout << "Ingrese ID del vuelo: "; cin >> id;
            cout << "Ingrese ID de la ruta: "; cin >> routeId;
            cout << "Ingrese fecha de salida: "; cin >> date;
            cout << "Ingrese hora de salida: "; cin >> departureTime;
            cout << "Ingrese hora de llegada: "; cin >> arrivalTime;
            cout << "Ingrese aeropuerto de salida: "; cin >> departureAirport;
            cout << "Ingrese aeropuerto de llegada: "; cin >> arrivalAirport;
            cout << "Ingrese ID del avion: "; cin >> airplaneId;
            cout << "Ingrese ID del piloto: "; cin >> pilotId;
            cout << "Ingrese ID del copiloto: "; cin >> copilotId;
            cout << "Ingrese la capacidad del avion: "; cin >> capacity;
            airport->addFlight(id, routeId, date, departureTime, arrivalTime, departureAirport, arrivalAirport, airplaneId, pilotId, copilotId, capacity);
            break;
        case 2:
            airport->showFlights();
            break;
        case 3:
            cout << "Ingrese ID del vuelo a modificar: "; cin >> id;
            cout << "Ingrese nueva fecha de salida: "; cin >> date;
            cout << "Ingrese nueva hora de salida: "; cin >> departureTime;
            cout << "Ingrese nueva hora de llegada: "; cin >> arrivalTime;
            cout << "Ingrese nuevo aeropuerto de salida: "; cin >> departureAirport;
            cout << "Ingrese nuevo aeropuerto de llegada: "; cin >> arrivalAirport;
            airport->modifyFlight(id, date, departureTime, arrivalTime, departureAirport, arrivalAirport);
            break;
        case 4:
            cout << "Ingrese ID del vuelo a eliminar: "; cin >> id;
            airport->deleteFlight(id);
            break;
        }
    } while (option != 5);
}

void Interface::manageReservations(Airport* airport) {
    int option;
    do {
        cout << "\nGestion de Reservaciones" << endl;
        cout << "1. Ingresar reservacion" << endl;
        cout << "2. Visualizar reservaciones" << endl;
        cout << "3. Modificar reservacion" << endl;
        cout << "4. Eliminar reservacion" << endl;
        cout << "5. Volver al menu principal" << endl;
        cout << "Seleccione una opción: ";
        cin >> option;

        int id, flightId;
        string passengerId, date, time;
        bool isPaid;

        switch (option) {
        case 1:
            cout << "Ingrese ID de la reservacion: "; cin >> id;
            cout << "Ingrese ID del vuelo: "; cin >> flightId;
            cout << "Ingrese ID del pasajero: "; cin >> passengerId;
            cout << "Ingrese fecha de la reservacion: "; cin >> date;
            cout << "Ingrese hora de la reservacion: "; cin >> time;
            cout << "¿Esta pagado? (1: Si, 0: No): "; cin >> isPaid;
            airport->addReservation(id, flightId, passengerId, date, time, isPaid);
            break;
        case 2:
            airport->showReservations();
            break;
        case 3:
            cout << "Ingrese ID de la reservacion a modificar: "; cin >> id;
            cout << "Ingrese nueva fecha: "; cin >> date;
            cout << "Ingrese nueva hora: "; cin >> time;
            cout << "¿Esta pagado? (1: Si, 0: No): "; cin >> isPaid;
            airport->modifyReservation(id, date, time, isPaid);
            break;
        case 4:
            cout << "Ingrese ID de la reservacion a eliminar: "; cin >> id;
            airport->deleteReservation(id);
            break;
        }
    } while (option != 5);
}

void Interface::displayMenu(Airport* airport) {
    int option;
    do {
        cout << "\nSistema de Gestion Aeropuerto" << endl;
        cout << "1. Gestion de Pasajeros" << endl;
        cout << "2. Gestion de Tripulacion" << endl;
        cout << "3. Gestion de Flota" << endl;
        cout << "4. Gestion de Rutas" << endl;
        cout << "5. Gestion de Vuelos" << endl;
        cout << "6. Gestion de Reservaciones" << endl;
        cout << "7. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> option;

        switch (option) {
        case 1:
            managePassengers(airport);
            break;
        case 2:
            manageCrew(airport);
            break;
        case 3:
            manageFleet(airport);
            break;
        case 4:
            manageRoutes(airport);
            break;
        case 5:
            manageFlights(airport);
            break;
        case 6:
            manageReservations(airport);
            break;
        }
    } while (option != 7);
}