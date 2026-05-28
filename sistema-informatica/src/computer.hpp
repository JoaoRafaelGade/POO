#ifndef COMPUTER_HPP
#define COMPUTER_HPP

#include <string>

using namespace std;

class Computer {
private:
    string brand_;
    string model_;

public:

    Computer(
        const string& brand,
        const string& model
    );

    ~Computer();

    string get_brand() const;
    string get_model() const;

    void power_on() const;
    void show_computer_info() const;
};

#endif