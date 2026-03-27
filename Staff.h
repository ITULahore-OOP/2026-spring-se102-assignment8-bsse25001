#ifndef STAFF_H
#define STAFF_H

#include "UniversityMember.h"
#include "AccessCard.h"
#include <iostream>
#include <string>
using namespace std;

class Staff:virtual public UniversityMember {
    private:
    double     salary;
    AccessCard card;   
public:
    // Constructor
    Staff(string name, int memberID, double salary, AccessCard card);
 // Public getter for salary
    double getSalary() const;
    void displayCard() const;
 
    // Overrides the pure virtual from UniversityMember
    void displayRole() const override;
};

#endif