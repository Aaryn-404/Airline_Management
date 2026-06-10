#include "FlightNode.h"
FlightNode::FlightNode() {
	flight = nullptr;
	next = nullptr;
}
FlightNode::FlightNode(Flight* f) {
	flight = f;
	next = nullptr;
}
FlightNode::~FlightNode() {
	if (flight != nullptr) {
		delete flight;
		flight = nullptr;
	}
}

Flight* FlightNode::getFlight() {
	return flight;
}
FlightNode* FlightNode::getNext() {
	return next;
}

void FlightNode::setNext(FlightNode* n) {
	next = n;
}