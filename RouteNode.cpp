#include "RouteNode.h"
RouteNode::RouteNode() {
	route = nullptr;
	next = nullptr;
}
RouteNode::RouteNode(Route* r) {
	route = r;
	next = nullptr;
}
RouteNode::~RouteNode() {
	if (route != nullptr) {
		delete route;
		route = nullptr;
	}
}

Route* RouteNode::getRoute() {
	return route;
}
RouteNode* RouteNode::getNext() {
	return next;
}

void RouteNode::setNext(RouteNode* n) {
	next = n;
}