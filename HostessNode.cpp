#include "HostessNode.h"
HostessNode::HostessNode() {
	hostess = nullptr;
	next = nullptr;
}
HostessNode::HostessNode(Hostess* h) {
	hostess = h;
	next = nullptr;
}
HostessNode::~HostessNode() {
	if (hostess != nullptr) {
		delete hostess;
		hostess = nullptr;
	}
}

Hostess* HostessNode::getHostess() {
	return hostess;
}
HostessNode* HostessNode::getNext() {
	return next;
}

void HostessNode::setNext(HostessNode* n) {
	next = n;
}