#include "PersonNode.h"
PersonNode::PersonNode() {
	person = nullptr;
	next = nullptr;
}
PersonNode::PersonNode(Person* p) {
	person = p;
	next = nullptr;
}
PersonNode::~PersonNode() {
	if (person != nullptr) {
		delete person;
		person = nullptr;
	}
}

Person* PersonNode::getPerson() {
	return person;
}
PersonNode* PersonNode::getNext() {
	return next;
}

void PersonNode::setNext(PersonNode* n) {
	next = n;
}