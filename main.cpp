#include "catch.hpp"
#include <sstream>
#include <iostream>
#include "AccessCard.h"
#include "Student.h"
#include "Staff.h"
#include "TeachingAssistant.h"
#include "TutoringSession.h"
#include "Department.h"

int main() {
    Department dept("Software Engineering");
    int choice = 0;

    do {
        cout << "--- University Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Add Staff\n";
        cout << "3. Add Teaching Assistant\n";
        cout << "4. Display All Members\n";
        cout << "5. Test TA Grading (Method Overloading)\n";
        cout << "6. Test Tutoring Sessions\n";
        cout << "0. Exit\n";
        cout << "Enter choice: " << endl;
        cin >> choice;

        switch (choice) {

            case 1: {
                string name;
                int id;
                double gpa;
                cout << "Enter Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "\nEnter ID: ";
                cin >> id;
                cout << "\nEnter GPA: ";
                cin >> gpa;
                // DMA: Creating object on heap so it survives the switch scope
                Student* s = new Student(name, id, gpa);
                dept.addMember(s);
                break;
            }

            case 2: {
                string name, cardID;
                int id;
                double sal;
                cout << "Enter Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter ID: ";
                cin >> id;
                cout << "\nEnter Salary: ";
                cin >> sal;
                cout << "\nEnter Access Card ID: ";
                cin >> cardID;
                AccessCard tempCard(cardID, 1); 
                Staff* st = new Staff(name, id, sal, tempCard);
                dept.addMember(st);
                break;
            }
            case 3: {
                string name, cardID;
                int id, hours;
                double gpa, sal;
                cout << "Enter Name: " << endl;
                cin.ignore();
                getline(cin, name);
                cout << "Enter ID: " << endl;
                cin >> id;
                cout << "Enter GPA: " << endl;
                cin >> gpa;
                cout << "Enter Salary: " << endl;
                cin >> sal;
                cout << "Enter Access Card ID: " << endl;
                cin >> cardID;
                cout << "Enter Working Hours: " << endl;
                cin >> hours;

                // DMA
                AccessCard taCard(cardID, 2);
                TeachingAssistant* ta = new TeachingAssistant(name, id, gpa, sal, taCard, hours);
                dept.addMember(ta);
                break;
            }

            case 4: {
                // Calls virtual displayRole() via base class pointers
                dept.displayAllRoles();
                break;
            }
            case 5: {
                //Compile-Time Polymorphism
                AccessCard testCard("TA-LHR-01", 2);
                TeachingAssistant testTA("Demo TA", 101, 3.8, 25000, testCard, 15);
                testTA.gradeAssignment(85);     // Numeric overloading
                testTA.gradeAssignment("A-"); // String overload
                break;
            }

            case 6: {
                // Operator Overloading
                TutoringSession sess1(101, 60.5);
                TutoringSession sess2(102, 45.0);
                // Using overloaded + operator
                TutoringSession total = sess1 + sess2;
                
                cout << "Session 1 Duration: " << sess1.getDuration() << endl;
                cout << "Session 2 Duration: " << sess2.getDuration() << endl;
                cout << "Combined Duration: " << total.getDuration() << endl;

                // Using overloaded > operator (friend function)
                if (sess1 > sess2) {
                    cout << "Session 1 is longer than session 2.\n";
                }
                else {
                    cout << "Session 2 is longer then session 1"<< endl;
                }
                break;
            }
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid Input.\n";
        }
    } while (choice != 0);
    
    return 0;
}