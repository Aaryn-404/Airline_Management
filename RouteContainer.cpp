#include "RouteContainer.h"
RouteContainer::RouteContainer() {
	node = nullptr;
}
RouteContainer::RouteContainer(RouteNode* n) {
	node = n;
}
RouteContainer::~RouteContainer() {
	RouteNode* current = node;
    while (current != nullptr) {
        RouteNode* next = current->getNext();
        delete current;			
        current = next;
    }
    node = nullptr;
}
bool RouteContainer::isEmpty() { return node == nullptr; }
int RouteContainer::size() {
	RouteNode* ptr = node;
	int c = 0;
	while (ptr!=nullptr) {
		c++;
		ptr = ptr->getNext();
	}
	return c;
}

string RouteContainer::toString() {
	stringstream ss;
	RouteNode* ptr = node;
	if (ptr == nullptr) {
		ss << "Lista de rutas vacia" << endl;
		return ss.str();
	}
	while (ptr != nullptr) {
		if (ptr->getRoute() != nullptr) {
			ss << "Ruta " << ptr->getRoute()->getId() << ": " << ptr->getRoute()->toString() << endl;
		}
		ptr = ptr->getNext();	
	}
	return ss.str();
}


void RouteContainer::insertAtEnd(int id, string origin, string destination, int dHour, int dMin, int scale, int ticketCost) {
	Route* newRoute = new Route(id, origin, destination, dHour, dMin, scale, ticketCost);
	RouteNode* newNode = new RouteNode(newRoute);
	if (node == nullptr) {
		node = newNode;
	}
	else {
		RouteNode* lastNode = node;
		while (lastNode->getNext() != nullptr) {
			lastNode = lastNode->getNext();
		}
		lastNode->setNext(newNode);
	}
}

Route* RouteContainer::findById(int id) {
    RouteNode* n = node;
    while (n != nullptr) {
        if (id == n->getRoute()->getId()) {
			return n->getRoute();
        }
        n = n->getNext(); 
    }
    return nullptr;
}

void RouteContainer::modifyRoute(int id, string o, string d, int h, int m, int sc, int cost) {
	RouteNode* n = node;
	while (n != nullptr) {
		if (id==n->getRoute()->getId()) {
			n->getRoute()->setOrigin(o);
			n->getRoute()->setDestination(d);
			n->getRoute()->setDHour(h);
			n->getRoute()->setDMin(m);
			n->getRoute()->setScale(sc);
			n->getRoute()->setTicketCost(cost);
			return;
		}
		n = n->getNext();
	}
}

bool RouteContainer::deleteById(int id) {
	RouteNode* pre = nullptr;
	RouteNode* curr = node;
	while (curr != nullptr) {
		if (id == curr->getRoute()->getId()) {
			if(pre==nullptr){
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