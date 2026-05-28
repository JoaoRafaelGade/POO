#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>

using namespace std;

class Employee {
private:
    string name_;
    string role_;

public:

    Employee(
        const string& name,
        const string& role
    );

    ~Employee();

    string get_name() const;
    string get_role() const;

    // Método para exibir informações do funcionário
    void show_employee_info() const;

    // Método com lógica real
    void repair_computer() const;
};

#endif