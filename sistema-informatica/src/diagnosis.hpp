#ifndef DIAGNOSIS_HPP
#define DIAGNOSIS_HPP

#include <string>
#include <memory>

#include "computer.hpp"
#include "employee.hpp"

using namespace std;

class Diagnosis {
private:
    string problem_;
    double repair_cost_;
    bool approved_;

    Computer computer_;
    shared_ptr<Employee> employee_;

public:

    Diagnosis(
        const string& problem,
        double repair_cost,
        const Computer& computer,
        shared_ptr<Employee> employee
    );

    ~Diagnosis();

    string get_problem() const;
    double get_repair_cost() const;
    bool is_approved() const;

    void approve_budget();
    void show_diagnosis() const;
};

#endif