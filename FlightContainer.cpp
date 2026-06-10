#include "FlightContainer.h"
FlightContainer::FlightContainer() {
    node = nullptr;
}
FlightContainer::FlightContainer(FlightNode* n) {
    node = n;
}
FlightContainer::~FlightContainer() {
    FlightNode* current = node;
    while (current != nullptr) {
        FlightNode* next = current->getNext();
        delete current;
        current = next;
    }
    node = nullptr;
}
bool FlightContainer::isEmpty() {
    return node == nullptr;
}

int FlightContainer::size() {
    int count = 0;
    FlightNode* ptr = node;
    while (ptr != nullptr) {
        count++;
        ptr = ptr->getNext();
    }
    return count;
}
void FlightContainer::insertAtEnd(int id, Route* route, string endDate, string exitHour, string arriveHour,
    string exitAirport, string arriveAirport, Pilot* pilot, Pilot* copilot,
    Airplane* airplane, int airplaneCapacity) {
    Flight* flight = new Flight(id, route, endDate, exitHour, arriveHour, exitAirport, arriveAirport, 
        pilot, copilot, airplane, airplaneCapacity);
    FlightNode* newNode = new FlightNode(flight);
    if (node == nullptr) {
        node = newNode;
    }
    else {
        FlightNode* lastNode = node;
        while (lastNode->getNext() != nullptr) {
            lastNode = lastNode->getNext();
        }
        lastNode->setNext(newNode);
    }
}

string FlightContainer::toString() {
    stringstream ss;
    FlightNode* current = node;
    if (current == nullptr) {
        ss << "No hay vuelos registrados.";
        return ss.str();
    }
    while (current != nullptr) {
        if (current->getFlight() != nullptr) {
            ss << current->getFlight()->toString() << "\n";
        }
        else {
            ss << "Error: Nodo sin vuelo asociado.\n";
        }
        current = current->getNext();
    }
    return ss.str();
}

Flight* FlightContainer::findById(int id) {
    FlightNode* current = node;
    while (current != nullptr) {
        if (current->getFlight()->getId() == id) {
            return current->getFlight();
        }
        current = current->getNext();
    }
    return nullptr;
}

void FlightContainer::modifyFlight(int id, string newEndDate, string newExitHour, string newArriveHour, 
    string newExitAirp, string newArriveAirp) {
    Flight* flight = findById(id);
    if (flight != nullptr) {
        flight->modifyFlight(newEndDate, newExitHour, newArriveHour, newExitAirp, newArriveAirp);
    }
}

bool FlightContainer::deleteById(int id) {
    FlightNode* pre = nullptr;
    FlightNode* curr = node;
    while (curr != nullptr) {
        if (id == curr->getFlight()->getId()) {
            if (pre == nullptr) {
                node = curr->getNext();
            }
            else {
                pre->setNext(curr->getNext());
            }
            curr->setNext(nullptr);
            delete curr;
            return true;
        }
        pre = curr;
        curr = curr->getNext();
    }
    return false;
}