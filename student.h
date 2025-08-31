#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    string course;
    int year;
};

// API
void addStudent();
void viewStudents();
void searchStudent();
void deleteStudent();

#endif