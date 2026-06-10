#include "Route.h"
Route::Route() {
	id = 0;
	origin="NULL";
	destination="NULL";
	dHour=0;
	dMin=0;
	scale=0;
	ticketCost=0;
}
Route::Route(int i, string o, string dest, int hours, int minutes, int s, int cost) {
	id = i;
	origin = o;
	destination = dest;
	dHour = hours;
	dMin = minutes;
	scale = s;
	ticketCost = cost;
}

Route::~Route(){}

int Route::getId() { return id; }
string Route::getOrigin() { return origin; }
string Route::getDestination() { return destination; }
int Route::getDHour() { return dHour; }
int Route::getDMin() { return dMin; }
int Route::getScale() { return scale; }
int Route::getTicketCost() { return ticketCost; }

void Route::setId(int i) { id = i; }
void Route::setOrigin(string o) { origin = o; }
void Route::setDestination(string dest) { destination = dest; }
void Route::setDHour(int hours) { dHour = hours; }
void Route::setDMin(int minutes) { dMin = minutes; }
void Route::setScale(int s) { scale = s; }
void Route::setTicketCost(int cost) { ticketCost = cost; }



string Route::toString() {
	stringstream ss;
	ss<< "Origen: " << origin << endl
		<< "Destino: " << destination << endl
		<< "Duracion en Horas: " << dHour << endl
		<< "Duracion en Minutos: " << dMin << endl
		<< "Escala: " << scale << endl
		<< "Costo en Dolares: " << ticketCost << endl;
		return ss.str();
}