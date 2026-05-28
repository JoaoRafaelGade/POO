#include "diagnosis.hpp"

#include <iostream>

using namespace std;

Diagnosis::Diagnosis(
    const string& problem,
    double repair_cost,
    const Computer& computer,
    shared_ptr<Employee> employee
)
    : problem_(problem),
      repair_cost_(repair_cost),
      approved_(false),
      computer_(computer),
      employee_(employee) {

    cout << "Diagnostico criado para o computador "
         << computer_.get_brand()
         << " "
         << computer_.get_model()
         << endl;
}

Diagnosis::~Diagnosis() {

    cout << "Diagnostico encerrado do computador "
         << computer_.get_brand()
         << " "
         << computer_.get_model()
         << endl;
}

string Diagnosis::get_problem() const {
    return problem_;
}

double Diagnosis::get_repair_cost() const {
    return repair_cost_;
}

bool Diagnosis::is_approved() const {
    return approved_;
}

void Diagnosis::approve_budget() {

    approved_ = true;

    cout << "Orcamento aprovado com sucesso."
         << endl;
}

void Diagnosis::show_diagnosis() const {

    cout << "\n===== DIAGNOSTICO =====\n";

    cout << "Problema identificado: "
         << problem_
         << endl;

    cout << "Valor do reparo: R$ "
         << repair_cost_
         << endl;

    cout << "Status do orcamento: ";

    if (approved_) {
        cout << "Aprovado";
    } else {
        cout << "Pendente";
    }

    cout << endl;

    cout << "Tecnico responsavel: "
         << employee_->get_name()
         << endl;

    cout << "Computador: "
         << computer_.get_brand()
         << " "
         << computer_.get_model()
         << endl;
}