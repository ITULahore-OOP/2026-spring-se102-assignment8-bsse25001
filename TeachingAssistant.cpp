#include "TeachingAssistant.h"

    TeachingAssistant::TeachingAssistant(string name, int memberID, double cgpa, double salary, AccessCard card, int workingHours):Student(name,memberID, cgpa), Staff(name, memberID, salary, card), UniversityMember(name, memberID) {
        this->workingHours = workingHours;
    }
 
    void TeachingAssistant::displayRole() const {
        cout << "Role: Teaching Assistant"<< endl;
        cout << "Name: "<< getName() << "\nMember ID: " << getMemberID() << "\nCGPA: " << getCGPA() << endl;
        cout << "\nSalary: " << getSalary() << "working Hours: " << workingHours << endl;
    }
 
    void TeachingAssistant::gradeAssignment(int score) {
        cout << "numeric score: "<< score << "/100" << endl;
    }     
    void TeachingAssistant::gradeAssignment(string letterGrade) {
        cout << "letter grade: "<< letterGrade << endl;
    } 
    int TeachingAssistant::getWorkingHours() const {
        return workingHours;
    }