#include "AirplaneContainer.h"
AirplaneContainer::AirplaneContainer() {
	node = nullptr;
}
AirplaneContainer::AirplaneContainer(AirplaneNode* n) {
	node = n;
}
AirplaneContainer::~AirplaneContainer() {
	AirplaneNode* current = node;
	while (current != nullptr) {
		AirplaneNode* next = current->getNext();
		delete current;
		current = next;
	}
	node = nullptr;
}
bool AirplaneContainer::isEmpty() { return node == nullptr; }
int AirplaneContainer::size() {
	AirplaneNode* ptr = node;
	int c = 0;
	while (ptr != nullptr) {
		c++;
		ptr = ptr->getNext();
	}
	return c;
}

string AirplaneContainer::toString() {
	stringstream ss;
	AirplaneNode* h = node;
	if (h == nullptr) {
		ss << "Lista de aviones vacia ";
		return ss.str();
	}
	while (h != nullptr) {
		if (h->getAirplane() != nullptr) {
			ss << "Avion: " << h->getAirplane()->getId() << ": " << h->getAirplane()->toString() << endl;
		}
		h = h->getNext();
	}
	return ss.str();
}

void AirplaneContainer::insertAtEnd(string id, string cat) {
	Airplane* newAirplane = new Airplane(id, cat);
	AirplaneNode* newNode = new AirplaneNode(newAirplane);
	if (node == nullptr) {
		node = newNode;
	}
	else {
		AirplaneNode* lastNode = node;
		while (lastNode->getNext() != nullptr) {
			lastNode = lastNode->getNext();
		}
		lastNode->setNext(newNode);
	}
}

Airplane* AirplaneContainer::findById(string id) {
	AirplaneNode* n = node;
	while (n != nullptr) {
		if (id == n->getAirplane()->getId()) {
			return n->getAirplane();
		}
		n = n->getNext();
	}
	return nullptr;
}
bool AirplaneContainer::deleteById(string id) {
	AirplaneNode* pre = nullptr;
	AirplaneNode* curr = node;
	while (curr != nullptr) {
		if (id == curr->getAirplane()->getId()) {
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