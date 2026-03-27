#include "Student.h"

// Constructor
    Student::Student(string name, int memberID, double cgpa):UniversityMember(name, memberID) {
        this->cgpa = cgpa;
    }
    // Public getter and setter
    double Student::getCGPA() const {
        return cgpa;
    }
    void Student::updateCGPA(double newCGPA) {
        cgpa = newCGPA;
    }
    // Overrides the pure virtual from UniversityMember 
    void Student::displayRole() const {
        cout << "Role: Student"<< endl;
        cout << "Name: "<< getName() << "\nMember ID: " << getMemberID() << "\nCGPA: " << cgpa << endl;
    }