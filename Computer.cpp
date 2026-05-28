#include "Computer.hpp"

#include <iostream>

using namespace std;

Computer::Computer(
    const string& brand,
    const string& model
)
    : brand_(brand), model_(model) {

    cout << "Computador cadastrado: "
         << brand_
         << " "
         << model_
         << endl;
}

Computer::~Computer() {

    cout << "Computador removido do sistema: "
         << brand_
         << " "
         << model_
         << endl;
}


string Computer::get_brand() const {
    return brand_;
}

string Computer::get_model() const {
    return model_;
}

void Computer::power_on() const {

    cout << "O computador "
         << brand_
         << " "
         << model_
         << " foi ligado com sucesso."
         << endl;
}

void Computer::show_computer_info() const {

    cout << "\n===== INFORMACOES DO COMPUTADOR =====\n";

    cout << "Marca: "
         << brand_
         << endl;

    cout << "Modelo: "
         << model_
         << endl;
}