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

    void show_employee_info() const;
    void repair_computer() const;
};

#endif