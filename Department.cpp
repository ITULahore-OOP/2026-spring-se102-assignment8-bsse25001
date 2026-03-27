#include "Department.h"

  // Constructor
    Department::Department(string departmentName) {
        this->departmentName = departmentName;
        memberCount = 0;
    }
    // Adds a pointer
    void Department::addMember(UniversityMember* member) {
        members[memberCount] = member;
        memberCount ++;
    }
    // runs through the members array and calls displayRole() on each pointer.
    void Department::displayAllRoles() const {
        for (int i = 0; i < memberCount; i++){
            members[i]->displayRole();
        }
    }