#ifndef STUDENT_H
#define STUDENT_H

#include "UniversityMember.h"
#include <iostream>
#include <string>
using namespace std;

class Student: virtual public UniversityMember {
    private:
    double cgpa;
    public:
    // Constructor
    Student(string name, int memberID, double cgpa);
    // Public getter and setter
    double getCGPA() const;
    void updateCGPA(double newCGPA);
    // Overrides the pure virtual from UniversityMember
    void displayRole() const override;
};

#endif