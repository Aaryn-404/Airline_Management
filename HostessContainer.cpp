#include "HostessContainer.h"
HostessContainer::HostessContainer() {
	node = nullptr;
}
HostessContainer::HostessContainer(HostessNode* n) {
	node = n;
}
HostessContainer::~HostessContainer() {
	HostessNode* current = node;
	while (current != nullptr) {
		HostessNode* next = current->getNext();
		delete current;
		current = next;
	}
	node = nullptr;
}
bool HostessContainer::isEmpty() { return node == nullptr; }
int HostessContainer::size() {
	HostessNode* ptr = node;
	int c = 0;
	while (ptr != nullptr) {
		c++;
		ptr = ptr->getNext();
	}
	return c;
}

string HostessContainer::toString() {
	stringstream ss;
	HostessNode* h = node;
	if (h == nullptr) {
		ss << "Lista de sobrecargo vacia ";
		return ss.str();
	}
	while (h != nullptr) {
		if (h->getHostess() != nullptr) {
			ss << "Sobrecargo: " << h->getHostess()->getId() << ": " << h->getHostess()->toString() << endl;
		}
		h = h->getNext();
	}
	return ss.str();
}

void HostessContainer::insertAtEnd(string id, string name, int age, string title, string phone, int grade) {
	Hostess* newHostess = new Hostess(id, name, age, title, phone, grade);
	HostessNode* newNode = new HostessNode(newHostess);
	if (node == nullptr) {
		node = newNode;
	}
	else {
		HostessNode* lastNode = node;
		while (lastNode->getNext() != nullptr) {
			lastNode = lastNode->getNext();
		}
		lastNode->setNext(newNode);
	}
}

Hostess* HostessContainer::findById(string id) {
	HostessNode* n = node;
	while (n != nullptr) {
		if (id == n->getHostess()->getId()) {
			return n->getHostess();
		}
		n = n->getNext();
	}
	return nullptr;
}
void HostessContainer::modifyHostess(string id, string n, int a, string t, string p, int g) {
	HostessNode* nd = node;
	while (nd != nullptr) {
		if (id == nd->getHostess()->getId()) {
			nd->getHostess()->setName(n);
			nd->getHostess()->setAge(a);
			nd->getHostess()->setTitle(t);
			nd->getHostess()->setPhone(p);
			nd->getHostess()->setGrade(g);
			return;
		}
		nd = nd->getNext();
	}
}
bool HostessContainer::deleteById(string id) {
	HostessNode* pre = nullptr;
	HostessNode* curr = node;
	while (curr != nullptr) {
		if (id == curr->getHostess()->getId()) {
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