#ifndef DIAGNOSIS_HPP
#define DIAGNOSIS_HPP

#include <string>

#include "Computer.hpp"
#include "Employee.hpp"

using namespace std;

class Diagnosis {
private:
    string problem_;
    double repair_cost_;
    bool approved_;

    Computer computer_;
    Employee* employee_;

public:
    // Construtor
    Diagnosis(
        const string& problem,
        double repair_cost,
        const Computer& computer,
        Employee* employee
    );

    // Destrutor
    ~Diagnosis();

    // Getters
    string get_problem() const;
    double get_repair_cost() const;
    bool is_approved() const;

    // Métodos
    void approve_budget();
    void show_diagnosis() const;
};

#endif