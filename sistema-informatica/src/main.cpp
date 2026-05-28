#include <iostream>

#include "client.hpp"
#include "computer.hpp"
#include "employee.hpp"
#include "diagnosis.hpp"

using namespace std;

int main() {

    Client client(
        "Joao Rafael",
        "83 99999-9999"
    );

    Computer computer(
        "Dell",
        "Inspiron 15"
    );

    shared_ptr<Employee> employee =
        make_shared<Employee>(
            "Carlos",
            "Tecnico de Informatica"
        );

    Diagnosis diagnosis(
        "SSD queimado",
        350.0,
        computer,
        employee
    );

    client.show_info();

    computer.show_computer_info();

    computer.power_on();

    employee->show_employee_info();

    employee->repair_computer();

    diagnosis.show_diagnosis();

    diagnosis.approve_budget();

    diagnosis.show_diagnosis();

    return 0;
}