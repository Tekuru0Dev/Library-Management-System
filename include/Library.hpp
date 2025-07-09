// LibraryFS.hpp
#ifndef LIBRARY_FS_HPP
#define LIBRARY_FS_HPP

#include <vector>
#include <string>
#include "Book.hpp"
#include "User.hpp"
#include "file_storage.hpp"
using namespace std;

class Library {
private:
    vector<Book> books;
    vector<User> users;

public:
    void addBook(const Book& book);
    void addUser(const User& user);
    void displayBooks() const;
    void displayUsers() const;

    vector<Book>& getBooks();
    vector<User>& getUsers();

    void loadFromFile(const string& bookFile, const string& userFile);
    void saveToFile(const string& bookFile, const string& userFile);
};

#endif
