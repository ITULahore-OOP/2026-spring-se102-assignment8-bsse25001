#ifndef TEACHINGASSISTANT_H
#define TEACHINGASSISTANT_H

#include "Student.h"
#include "Staff.h"
#include <iostream>
#include <string>
using namespace std;

class TeachingAssistant: public Student, public Staff {
    private:
    int workingHours;
 
public:
    // Constructor
    TeachingAssistant(string name, int memberID, double cgpa, double salary, AccessCard card, int workingHours);
    // Overrides displayRole()
    void displayRole() const override;
    // method overloading
    void gradeAssignment(int    score);       
    void gradeAssignment(string letterGrade);  
    // Getter
    int getWorkingHours() const;
};

#endif