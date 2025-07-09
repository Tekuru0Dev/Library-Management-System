// User.cpp
#include "User.hpp"
using namespace std;

User::User(int id, const string& n, const string& e)
    : user_id(id), name(n), email(e) {}

int User::getId() const { return user_id; }
string User::getName() const { return name; }
string User::getEmail() const { return email; }

void User::setName(const string& n) { name = n; }
void User::setEmail(const string& e) { email = e; }

void User::display() const {
    cout << "User ID: " << user_id << "\n"
              << "Name: " << name << "\n"
              << "Email: " << email << "\n";
}
// End of User.cpp