// Book.hpp
#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>
#include <iostream>
using namespace std;

class Book
{
private:
    int book_id;
    string title;
    string author;
    int quantity;

public:
    Book(int id, const string &t, const string &a, int q);

    int getId() const;
    string getTitle() const;
    string getAuthor() const;
    int getQuantity() const;

    void setTitle(const string &t);
    void setAuthor(const string &a);
    void setQuantity(int q);

    void display() const;
};

#endif // BOOK_HPP
// End of Book.hpp