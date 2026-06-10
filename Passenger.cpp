#include "Passenger.h"
Passenger::Passenger() {
	id = "";
	name = "";
	age = 0;
}
Passenger::Passenger(string i, string n, int a):Person(i, n, a) {
	id = i;
	name = n;
	age = a;
}
Passenger::~Passenger() {

}
string Passenger::toString() {
	stringstream ss;
	ss << "Pasajero: " << Person::toString() << endl;
	return ss.str();
}