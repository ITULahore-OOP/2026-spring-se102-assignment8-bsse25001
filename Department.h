#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "UniversityMember.h"
#include <iostream>
#include <string>
using namespace std;

class Department {
    private:
    string departmentName;
    UniversityMember* members[50];
    int memberCount;
public:
    // Constructor
    Department(string departmentName);
    // Adds a pointer 
    void addMember(UniversityMember* member);
    void displayAllRoles() const;
};

#endif