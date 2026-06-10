#include "AirplaneNode.h"
AirplaneNode::AirplaneNode() {
	airplane = nullptr;
	next = nullptr;
}
AirplaneNode::AirplaneNode(Airplane* h) {
	airplane = h;
	next = nullptr;
}
AirplaneNode::~AirplaneNode() {
	if (airplane != nullptr) {
		delete airplane;
		airplane = nullptr;
	}
}

Airplane* AirplaneNode::getAirplane() {
	return airplane;
}
AirplaneNode* AirplaneNode::getNext() {
	return next;
}

void AirplaneNode::setNext(AirplaneNode* n) {
	next = n;
}