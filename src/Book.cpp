#include "Book.hpp"
using namespace std;

Book::Book(int id, const string &t, const string &a, int q)
    : book_id(id), title(t), author(a), quantity(q) {}

int Book::getId() const { return book_id; }
string Book::getTitle() const { return title; }
string Book::getAuthor() const { return author; }
int Book::getQuantity() const { return quantity; }

void Book::setTitle(const string &t) { title = t; }
void Book::setAuthor(const string &a) { author = a; }
void Book::setQuantity(int q) { quantity = q; }

void Book::display() const {
    cout << "Book ID: " << book_id << "\n"
         << "Title: " << title << "\n"
         << "Author: " << author << "\n"
         << "Quantity: " << quantity << "\n";
}
// End of Book.cpp