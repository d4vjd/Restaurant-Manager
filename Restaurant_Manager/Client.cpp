#include "Client.h"

Client::Client() {

}

Client::Client(string numeClient) {
	setClientName(numeClient);
}

void Client::setClientName(string numeClient) {
	this->clientName = numeClient;
}

string Client::getClientName() {
	return this->clientName;
}