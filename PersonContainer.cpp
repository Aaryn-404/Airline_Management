#include "PersonContainer.h"
PersonContainer::PersonContainer() {
	node = nullptr;
}
PersonContainer::PersonContainer(PersonNode* n) {
	node = n;
}
PersonContainer::~PersonContainer() {
	PersonNode* current = node;
	while (current != nullptr) {
		PersonNode* next = current->getNext();
		delete current;
		current = next;
	}
	node = nullptr;
}
bool PersonContainer::isEmpty() { return node == nullptr; }
int PersonContainer::size() {
	PersonNode* ptr = node;
	int c = 0;
	while (ptr != nullptr) {
		c++;
		ptr = ptr->getNext();
	}
	return c;
}

string PersonContainer::toString() {
	stringstream ss;
	PersonNode* p = node;
	if (p == nullptr) {
		ss << "Lista de personas vacia ";
		return ss.str();
	}
	while (p != nullptr) {
		if (p->getPerson() != nullptr) {
			ss << "Persona: " << p->getPerson()->getId() << ": " << p->getPerson()->toString() << endl;
		}
		p = p->getNext();
	}
	return ss.str();
}


void PersonContainer::insertAtEnd(string id, string name, int age) {
	Person* newPerson = new Person(id, name, age);
	PersonNode* newNode = new PersonNode(newPerson);
	if (node == nullptr) {
		node = newNode;
	}
	else {
		PersonNode* lastNode = node;
		while (lastNode->getNext() != nullptr) {
			lastNode = lastNode->getNext();
		}
		lastNode->setNext(newNode);
	}
}
Person* PersonContainer::findById(string id) {
	PersonNode* n = node;
	while (n != nullptr) {
		if (id == n->getPerson()->getId()) {
			return n->getPerson();
		}
		n = n->getNext();
	}
	return nullptr;
}
Pilot* PersonContainer::findPilotById(string id) {
	PersonNode* n = node;
	while (n != nullptr) {
		if (id == n->getPerson()->getId()) {
			return (Pilot*)n->getPerson();
		}
		n = n->getNext();
	}
	return nullptr;
}
Passenger* PersonContainer::findPassengerById(string id) {
	PersonNode* n = node;
	while (n != nullptr) {
		if (id == n->getPerson()->getId()) {
			return (Passenger*)n->getPerson();
		}
		n = n->getNext();
	}
	return nullptr;
}
void PersonContainer::modifyPerson(string id, string n, int a) {
	PersonNode* nd = node;
	while (nd != nullptr) {
		if (id == nd->getPerson()->getId()) {
			nd->getPerson()->setName(n);
			nd->getPerson()->setAge(a);
			return;
		}
		nd = nd->getNext();
	}
}
bool PersonContainer::deleteById(string id) {
	PersonNode* pre = nullptr;
	PersonNode* curr = node;
	while (curr != nullptr) {
		if (id == curr->getPerson()->getId()) {
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
void PersonContainer::insertPilotAtEnd(string id, string name, int age, string mail, char gender) {
	Pilot* newPilot = new Pilot(id, name, age, mail, gender);
	PersonNode* newNode = new PersonNode(newPilot);
	if (node == nullptr) {
		node = newNode;
	}
	else {
		PersonNode* lastNode = node;
		while (lastNode->getNext() != nullptr) {
			lastNode = lastNode->getNext();
		}
		lastNode->setNext(newNode);
	}
}

