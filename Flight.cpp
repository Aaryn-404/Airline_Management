#include "Flight.h"
Flight::Flight(int i,Route* r, string endD, string exitH, string arriveH, string exitAirp, 
	string arriveAirp, Pilot* p, Pilot* copi, Airplane* airpl, int airplaneCapacity) {
	id = i;
	route = r;
	endDate = endD;
	exitHour = exitH;
	arriveHour = arriveH;
	exitAirport = exitAirp;
	arriveAirport = arriveAirp;
	pilot = p;
	copilot = copi;
	airplane = airpl;
	nPassenger = 0;
	freeSeats = airplaneCapacity;
	occupiedSeats = 0;
}
Flight::~Flight() {
}
void Flight::addPassenger(Passenger* passenger) {
	if (freeSeats > 0 && nPassenger < 100) {
		passengerList[nPassenger] = passenger;
		nPassenger++;
		freeSeats--;
		occupiedSeats++;
	}
	return;
}
void Flight::deletePassenger(string idPassenger) {
	for (int i = 0; i < nPassenger; i++) {
		if (passengerList[i]->getId() == idPassenger) {
			for (int j = i; j < nPassenger - 1; j++) {
				passengerList[j] = passengerList[j + 1];
			}
			passengerList[nPassenger - 1] = nullptr;
			nPassenger--;
			freeSeats++;
			occupiedSeats--;
			return;
		}
		return;
	}
	return;
}
void Flight::showPassengerList() {
	for (int i = 0; i < nPassenger; i++) {
		passengerList[i]->toString();
	}
}
void Flight::addHostess(Hostess* hostess) {
	for (int i = 0; i < 3; i++) {
		if (hostessList[i] == nullptr) {
			hostessList[i] = hostess;
			return;
		}
	}
	return;
}

void Flight::deleteHostess(string id) {
	for (int i = 0; i < 3; i++) {
		if (hostessList[i] != nullptr && hostessList[i]->getId() == id) {
			hostessList[i] = nullptr;
			return;
		}
	}
	return;
}
string Flight::showHostessList() {
	stringstream ss;
	for (int i = 0; i < 3; i++) {
		if (hostessList[i] != nullptr) {
			ss << hostessList[i]->toString() << endl;
		}
	}
	return ss.str();
}

int Flight::getFreeSeats() { return freeSeats; }
int Flight::getOccupiedSeats() { return occupiedSeats; }
int Flight::getId() { return id; }
void Flight::modifyFlight(string newEndDate, string newExitHour, string newArriveHour, string newExitAirp, string newArriveAirp) {
	endDate = newEndDate;
	exitHour = newExitHour;
	arriveHour = newArriveHour;
	exitAirport = newExitAirp;
	arriveAirport = newArriveAirp;
}
string Flight::toString() {
	stringstream ss;
	ss << "ID Vuelo: " << id << "\n"
		<< "Ruta: " << (route ? route->getId() : -1) << "\n"
		<< "Fecha de Salida: " << endDate << "\n"
		<< "Hora de Salida: " << exitHour << "\n"
		<< "Hora de Llegada: " << arriveHour << "\n"
		<< "Aeropuerto de Salida: " << exitAirport << "\n"
		<< "Aeropuerto de Llegada: " << arriveAirport << "\n"
		<< "Piloto: " << (pilot ? pilot->getName() : "No asignado") << "\n"
		<< "Copiloto: " << (copilot ? copilot->getName() : "No asignado") << "\n"
		<< "Sobrecargos:\n";
	for (int i = 0; i < 3; i++) {
		if (hostessList[i] != nullptr) {
			ss << "- " << hostessList[i]->getName() << "\n";
		}
	}
	ss << "Pasajeros:\n";
	for (int i = 0; i < nPassenger; i++) {
		if (passengerList[i] != nullptr) {
			ss << "- " << passengerList[i]->getName() << "\n";
		}
	}
	ss << "Avion: " << (airplane ? airplane->toString() : "No asignado") << "\n"
		<< "Asientos Libres: " << freeSeats << "\n"
		<< "Asientos Ocupados: " << occupiedSeats << "\n";
	return ss.str();
}
