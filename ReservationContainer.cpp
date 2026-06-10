#include "ReservationContainer.h"
ReservationContainer::ReservationContainer() {
    node = nullptr;
}
ReservationContainer::ReservationContainer(ReservationNode* n) {
    node = n;
}
ReservationContainer::~ReservationContainer() {
    ReservationNode* current = node;
    while (current != nullptr) {
        ReservationNode* next = current->getNext();
        delete current;
        current = next;
    }
    node = nullptr;
}

bool ReservationContainer::isEmpty() {
    return node == nullptr;
}

int ReservationContainer::size() {
    int count = 0;
    ReservationNode* ptr = node;
    while (ptr != nullptr) {
        count++;
        ptr = ptr->getNext();
    }
    return count;
}

void ReservationContainer::insertAtEnd(int id, Flight* flight, Passenger* passenger, string date, string time, bool isPaid) {
    ReservationNode* current = node;
    while (current != nullptr) {
        if (current->getReservation()->getFlight() == flight &&
            current->getReservation()->getPassenger() == passenger) {
            return;
        }
        current = current->getNext();
    }
    Reservation* newReservation = new Reservation(id, flight, passenger, date, time, isPaid);
    ReservationNode* newNode = new ReservationNode(newReservation);
    if (node == nullptr) {
        node = newNode;
    }
    else {
        ReservationNode* lastNode = node;
        while (lastNode->getNext() != nullptr) {
            lastNode = lastNode->getNext();
        }
        lastNode->setNext(newNode);
    }
    flight->addPassenger(passenger);
}

string ReservationContainer::toString() {
    stringstream ss;
    ReservationNode* current = node;
    if (current == nullptr) {
        ss << "No hay reservaciones registradas.";
        return ss.str();
    }
    while (current != nullptr) {
        ss << current->getReservation()->toString() << "\n";
        current = current->getNext();
    }
    return ss.str();
}

Reservation* ReservationContainer::findById(int id) {
    ReservationNode* current = node;
    while (current != nullptr) {
        if (current->getReservation()->getId() == id) {
            return current->getReservation();
        }
        current = current->getNext();
    }
    return nullptr;
}

void ReservationContainer::modifyReservation(int id, string newDate, string newTime, Flight* newFlight) {
    Reservation* reservation = findById(id);
    if (reservation != nullptr) {
        reservation->modifyReservation(newDate, newTime, newFlight);
    }
}

bool ReservationContainer::deleteById(int id) {
    ReservationNode* prev = nullptr;
    ReservationNode* curr = node;
    while (curr != nullptr) {
        if (curr->getReservation()->getId() == id) {
            if (prev == nullptr) {
                node = curr->getNext();
            }
            else {
                prev->setNext(curr->getNext());
            }
            delete curr->getReservation();
            delete curr;
            return true;
        }
        prev = curr;
        curr = curr->getNext();
    }
    return false;
}
string ReservationContainer::getPassengersByFlight(Flight* flight) {
    stringstream ss;
    ReservationNode* current = node;
    bool hasPassengers = false;
    while (current != nullptr) {
        if (current->getReservation()->getFlight() == flight) {
            ss << "- " << current->getReservation()->getPassenger()->getName() << "\n";
            hasPassengers = true;
        }
        current = current->getNext();
    }
    return hasPassengers ? ss.str() : "No hay pasajeros en este vuelo.";
}

