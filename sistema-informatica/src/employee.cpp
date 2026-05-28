#include "employee.hpp"

#include <iostream>

using namespace std;

Employee::Employee(
    const string& name,
    const string& role
)
    : name_(name), role_(role) {

    cout << "Funcionario criado: "
         << name_
         << endl;
}

Employee::~Employee() {

    cout << "Funcionario : "
         << name_
         << endl;
}

string Employee::get_name() const {
    return name_;
}

string Employee::get_role() const {
    return role_;
}

void Employee::show_employee_info() const {

    cout << "Informações do funcionário\n";

    cout << "Nome: "
         << name_
         << endl;

    cout << "Função: "
         << role_
         << endl;
}

void Employee::repair_computer() const {

    cout << name_
         << " Está concertando"
         << endl;
}