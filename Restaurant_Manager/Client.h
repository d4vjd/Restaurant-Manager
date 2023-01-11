#pragma once
#include <iostream>
using namespace std;

class Client {
private:

    string clientName;
    int idClient;

public:

    Client();

    Client(string clientName);

    void setClientName(string clientName);

    string getClientName();
};
