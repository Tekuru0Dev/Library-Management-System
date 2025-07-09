// User.hpp
#ifndef USER_HPP
#define USER_HPP

#include <string>
#include <iostream>
using namespace std;

class User {
private:
    int user_id;
    string name;
    string email;

public:
    User(int id, const string& n, const string& e);

    int getId() const;
    string getName() const;
    string getEmail() const;

    void setName(const string& n);
    void setEmail(const string& e);

    void display() const;
};

#endif
// USER_HPP