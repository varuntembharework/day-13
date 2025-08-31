#include <iostream>
#include <limits>
#include "book.h"
#include "student.h"
using namespace std;

static int readChoice(int minOpt, int maxOpt) {
    while (true) {
        cout << "Enter choice: ";
        int c;
        if (cin >> c) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (c >= minOpt && c <= maxOpt) return c;
            cout << "Please choose between " << minOpt << " and " << maxOpt << ".\n";
        } else {
            cout << "Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

void bookMenu() {
    int choice;
    do {
        cout << "\n========== Book Management ==========\n"
             << "1. Add Book\n"
             << "2. View Books\n"
             << "3. Search Book\n"
             << "4. Delete Book\n"
             << "0. Back to Main Menu\n"
             << "=====================================\n";
        choice = readChoice(0, 4);

        switch (choice) {
            case 1: addBook(); break;
            case 2: viewBooks(); break;
            case 3: searchBook(); break;
            case 4: deleteBook(); break;
            case 0: break;
        }
    } while (choice != 0);
}

void studentMenu() {
    int choice;
    do {
        cout << "\n========== Student Management ==========\n"
             << "1. Add Student\n"
             << "2. View Students\n"
             << "3. Search Student\n"
             << "4. Delete Student\n"
             << "0. Back to Main Menu\n"
             << "========================================\n";
        choice = readChoice(0, 4);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 0: break;
        }
    } while (choice != 0);
}

int main() {
    int choice;
    do {
        cout << "\n========== Library Management System ==========\n"
             << "1. Book Management\n"
             << "2. Student Management\n"
             << "0. Exit\n"
             << "===============================================\n";
        choice = readChoice(0, 2);

        switch (choice) {
            case 1: bookMenu(); break;
            case 2: studentMenu(); break;
            case 0: cout << "Exiting...\n"; break;
        }
    } while (choice != 0);

    return 0;
}