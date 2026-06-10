#include "ReservationNode.h"
ReservationNode::ReservationNode() {
	reservation = nullptr;
	next = nullptr;
}
ReservationNode::ReservationNode(Reservation* r) {
	reservation = r;
	next = nullptr;
}
ReservationNode::~ReservationNode() {
	if (reservation != nullptr) {
		delete reservation;
		reservation = nullptr;
	}
}

Reservation* ReservationNode::getReservation() {
	return reservation;
}
ReservationNode* ReservationNode::getNext() {
	return next;
}

void ReservationNode::setNext(ReservationNode* n) {
	next = n;
}