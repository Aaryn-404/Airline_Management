#include "Reservation.h"
Reservation::Reservation(int i, Flight* fl, Passenger* p, string d, string t, bool iP) {
    id=i;
    flight=fl;
    passenger=p;
    date=d;
    time=t;
    isPaid=iP;
}
Reservation::~Reservation() {
   
}
int Reservation::getId() {
    return id;
}
Flight* Reservation::getFlight() {
    return flight;
}
Passenger* Reservation::getPassenger() {
    return passenger;
}

string Reservation::getDate() {
    return date;
}

string Reservation::getTime() {
    return time;
}

bool Reservation::getIsPaid() {
    return isPaid;
}
void Reservation::markAsPaid() {
    isPaid = true;
    printTicket();
}
void Reservation::modifyReservation(string newDate, string newTime, Flight* newFlight) {
    date = newDate;
    time = newTime;
    flight = newFlight;
}
string Reservation::printTicket() {
    stringstream ss;
    if (!isPaid) {
        ss << "Error: El boleto no puede imprimirse porque la reservación no esta pagada.\n";
        return ss.str();
    }
    ss << Reservation::toString() << endl;
    return ss.str();
}
string Reservation::toString()  {
    stringstream ss;
    ss << "Reservacion ID: " << id << "\n"
        << "Pasajero: " << passenger->getName() << "\n"
        << "Vuelo: " << flight->getId() << "\n"
        << "Fecha: " << date << "\n"
        << "Hora: " << time << "\n"
        << "Estado de pago: " << (isPaid ? "Pagado" : "Pendiente") << "\n";
    return ss.str();
}