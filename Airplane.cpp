#include "Airplane.h"
Airplane::Airplane() {
	id = "";
	category = "";
}
Airplane::Airplane(string i, string cat) {
	id = i;
	category = cat;
}
string Airplane::getId() {
	return id;
}
string Airplane::toString() {
	stringstream ss;
	ss << "ID: " << id << endl
		<< "Categoria: " << Category::showInfo(category) << endl;
	return ss.str();
}