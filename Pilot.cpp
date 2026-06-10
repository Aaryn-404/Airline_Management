#include "Pilot.h"
Pilot::Pilot() {
	id = "";
	name = "";
	age = 0;
	mailEi = "";
	gender = 'X';
}
Pilot::Pilot(string i, string n, int a, string mail, char g) : Aircrew(i, n, a){
	id = i;
	name = n;
	age = a;
	mailEi = mail;
	gender = g;
}
Pilot::~Pilot() {

}
void Pilot::setMail(string mail) {
	mailEi = mail;
}
void Pilot::setGender(char g) {
	gender = g;
}

string Pilot::toString() {
	stringstream ss;
	ss << "Piloto: " << Aircrew::toString()
		<< "Correo: " << mailEi << endl
		<< "Genero: " << gender << endl;
	return ss.str();
}