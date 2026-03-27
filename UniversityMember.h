#ifndef UNIVERSITYMEMBER_H
#define UNIVERSITYMEMBER_H

#include <iostream>
#include <string>
using namespace std;

class UniversityMember {
    private:
    string name;
    int memeberID;
    public:
    UniversityMember(string name, int memberID);
    // Virtual destructor 
    virtual ~UniversityMember();
    //  getters 
    string getName() const;
    int    getMemberID() const;
    // Pure virtual function 
    virtual void displayRole() const = 0;

};

#endif