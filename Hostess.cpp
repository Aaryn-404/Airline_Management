#include "Hostess.h"
Hostess::Hostess() {
	id = "";
	name = "";
	age = 0;
	title = "";
	phone = "";
	grade = 0;
}
Hostess::Hostess(string i, string n, int a, string t, string p, int g):Aircrew(i, n, a) {
	id = i;
	name = n;
	age = a;
	title = t;
	phone = p;
	grade = g;
}
Hostess::~Hostess() {

}
void Hostess::setTitle(string t) {
	title = t;
}
void Hostess::setPhone(string p) {
	phone = p;
}
void Hostess::setGrade(int g) {
	grade = g;
}

string Hostess::toString() {
	stringstream ss;
	ss << "Sobrecargo: " << Aircrew::toString()
		<< "Titulo: " << title << endl
		<< "Telefono: " << phone << endl
		<< "Grado: " << grade << endl;
	return ss.str();
}