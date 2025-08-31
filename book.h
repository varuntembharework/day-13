#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    int quantity;
};

// API
void addBook();
void viewBooks();
void searchBook();
void deleteBook();

#endif