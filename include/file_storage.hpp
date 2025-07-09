#ifndef FILE_STORAGE_HPP
#define FILE_STORAGE_HPP

#include <string>
#include <vector>
#include "Book.hpp"
#include "User.hpp"

using namespace std;

void saveBooksToFile(const vector<Book> &books, const string &filename);
void loadBooksFromFile(vector<Book> &books, const string &filename);

void saveUsersToFile(const vector<User> &users, const string &filename);
void loadUsersFromFile(vector<User> &users, const string &filename);

#endif
// FILE_STORAGE_HPP