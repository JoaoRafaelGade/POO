#ifndef CLIENT_HPP
#define CLIENT_HPP

using namespace std;

#include <string>

class Client {
private:
    string name_;
    string phone_;

public:

    Client(
        const string& name,
        const string& phone
    );

    ~Client();

    string get_name() const;
    string get_phone() const;

    void show_info() const;
};

#endif