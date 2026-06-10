#include "Category.h"
Category::infoCat Category::categories[Category::n];
void Category::startCat() {
    categories[0] = { "AI-19", "Airbus319", "27.7m3", 156, "---", "7200km" };
    categories[1] = { "AI-20", "Airbus320", "37.40m3", 220, "---", "3100km" };
    categories[2] = { "BO-73", "Boeing737", "52.5m3", 215, "---", "10000km" };
    categories[3] = { "ANT-1", "Antonov", "1300m3", NULL, "SI", "4000km" };
}

string Category::showInfo(string cat) {
    for (int i = 0; i < n; i++) {
        if (categories[i].category == cat) {
            stringstream ss;
            ss << "Categoria: " << categories[i].category << endl
             << "Marca: " << categories[i].brand << endl
             << "Carga: " << categories[i].charge << endl
             << "Pasajeros: " << categories[i].passenger << endl
             << "Militar: " << categories[i].military << endl
             << "Alcance: " << categories[i].range << endl;
            return ss.str();
        }
    }
    return "Category not Found";
}