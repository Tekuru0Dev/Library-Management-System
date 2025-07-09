// LibraryFS.cpp
#include <iostream>
#include <algorithm>
#include "Library.hpp"
#include "Book.hpp"
#include "User.hpp"
#include "file_storage.hpp"
using namespace std;

void Library::addBook(const Book& book) {
    books.push_back(book);
    cout << "Book added.\n";
}

void Library::addUser(const User& user) {
    users.push_back(user);
    cout << "User added.\n";
}

void Library::displayBooks() const {
    for (const auto& book : books) {
        book.display();
        cout << "-----------------------\n";
    }
}

void Library::displayUsers() const {
    for (const auto& user : users) {
        user.display();
        cout << "-----------------------\n";
    }
}

vector<Book>& Library::getBooks() {
    return books;
}

vector<User>& Library::getUsers() {
    return users;
}

void Library::loadFromFile(const string& bookFile, const string& userFile) {
    loadBooksFromFile(books, bookFile);
    loadUsersFromFile(users, userFile);
}

void Library::saveToFile(const string& bookFile, const string& userFile) {
    saveBooksToFile(books, bookFile);
    saveUsersToFile(users, userFile);
}