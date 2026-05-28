#include "Client.hpp"

#include <iostream>

using namespace std;

Client::Client(
    const string& name,
    const string& phone
)
    : name_(name), phone_(phone) {

    cout << "Cliente criado: "
              << name_
              << std::endl;
}

Client::~Client() {
    cout << "Cliente destruido: "
              << name_
              << endl;
}

string Client::get_name() const {
    return name_;
}

string Client::get_phone() const {
    return phone_;
}

void Client::show_info() const {

    cout << "Informações do cliente:\n";

    cout << "Name: "
              << name_
              << endl;

    cout << "Phone: "
              << phone_
              << endl;
}