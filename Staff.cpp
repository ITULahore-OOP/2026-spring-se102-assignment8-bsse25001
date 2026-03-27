#include "Staff.h"

 // Constructor
    Staff::Staff(string name, int memberID, double salary, AccessCard card):UniversityMember(name, memberID) {
        this->card= card;
        this->salary = salary;
    }
    // Public getter
    double Staff::getSalary() const {
        return salary;
    }

    void Staff::displayCard() const {
        card.displayCardInfo();
    }
    // Overrides the pure virtual from UniversityMember 
    void Staff::displayRole() const {
        cout << "Role: Staff"<< endl;
        cout << "Name: "<< getName() << "\nMember ID: " << getMemberID() << "\nSalary: " << salary << endl;
    }