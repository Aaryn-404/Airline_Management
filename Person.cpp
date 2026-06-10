#include "Person.h"
Person::Person() {
	id = "";
	name = "";
	age = 0;
}
Person::Person(string i, string n, int a) {
	id = i;
	name = n;
	age = a;
}
Person::~Person() {}
string Person::getId() {
	return id;
}
string Person::getName() {
	return name;
}
int Person::getAge() {
	return age;
}
void Person::setName(string n) {
	name = n;
}
void Person::setAge(int a) {
	age = a;
}
string Person::toString() {
	stringstream ss;
	ss << "ID Persona: " << id << endl
		<< "Nombre: " << name << endl
		<< "Edad: " << age << endl;
	return ss.str();
}