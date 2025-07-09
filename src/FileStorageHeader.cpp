// FileStorageHeader.cpp
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
#include "Library.hpp"
#include "Book.hpp"
#include "User.hpp"
#include "file_storage.hpp"

using namespace std;

void saveBooksToFile(const vector<Book> &books, const string &filename) {
    ofstream outFile(filename);
    if (!outFile) {
        cerr << "Error: Could not open file for writing: " << filename << endl;
        return;
    }
    for (const auto &book : books) {
        outFile << book.getId() << ','
                << book.getTitle() << ','
                << book.getAuthor() << ','
                << book.getQuantity() << '\n';
    }
    outFile.close();
}

void loadBooksFromFile(vector<Book> &books, const string &filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Warning: Could not open file for reading: " << filename << " (starting with empty book list)" << endl;
        return;
    }
    string line;
    while (getline(inFile, line)) {
        istringstream ss(line);
        string idStr, title, author, qtyStr;

        if (!getline(ss, idStr, ',') || !getline(ss, title, ',') || !getline(ss, author, ',') || !getline(ss, qtyStr)) {
            cerr << "Skipping malformed line: " << line << endl;
            continue;
        }

        try {
            int id = stoi(idStr);
            int quantity = stoi(qtyStr);
            books.emplace_back(id, title, author, quantity);
        } catch (...) {
            cerr << "Error parsing line: " << line << endl;
        }
    }
    inFile.close();
}

void saveUsersToFile(const vector<User> &users, const string &filename) {
    ofstream outFile(filename);
    if (!outFile) {
        cerr << "Error: Could not open file for writing: " << filename << endl;
        return;
    }
    for (const auto &user : users) {
        outFile << user.getId() << ','
                << user.getName() << ','
                << user.getEmail() << '\n';
    }
    outFile.close();
}

void loadUsersFromFile(vector<User> &users, const string &filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Warning: Could not open file for reading: " << filename << " (starting with empty user list)" << endl;
        return;
    }
    string line;
    while (getline(inFile, line)) {
        istringstream ss(line);
        string idStr, name, email;

        if (!getline(ss, idStr, ',') || !getline(ss, name, ',') || !getline(ss, email)) {
            cerr << "Skipping malformed line: " << line << endl;
            continue;
        }

        try {
            int id = stoi(idStr);
            users.emplace_back(id, name, email);
        } catch (...) {
            cerr << "Error parsing line: " << line << endl;
        }
    }
    inFile.close();
}