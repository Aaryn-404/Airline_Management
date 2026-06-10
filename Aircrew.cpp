#include "Aircrew.h"
Aircrew::Aircrew() {
	id = "";
	name = "";
	age = 0;
}
Aircrew::Aircrew(string i, string n, int a) :Person(i, n, a) {
	id = i;
	name = n;
	age = a;
}
Aircrew::~Aircrew() {

}
string Aircrew::toString() {
	stringstream ss;
	ss << "Tripulante: " << Person::toString() << endl;
	return ss.str();
}