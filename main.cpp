#include <iostream>
#include <string>
#include <vector>
#include "include/file_storage.hpp"
#include "include/Book.hpp"
#include "include/User.hpp"
#include "include/Library.hpp"

using namespace std;

int main() {
    Library lib;

    // Load data from files
    lib.loadFromFile("data/books.txt", "data/users.txt");

    // Add a new book and user
    Book b1(1, "C++ Primer", "Lippman", 5);
    User u1(1, "Alice", "alice@example.com");

    lib.addBook(b1);
    lib.addUser(u1);

    // Display everything
    cout << "\nAll Books:\n";
    lib.displayBooks();

    cout << "\nAll Users:\n";
    lib.displayUsers();

    // Save data back to files
    lib.saveToFile("data/books.txt", "data/users.txt");

    return 0;
}
// End of main.cpp
// This is the main entry point for the Library Management System.