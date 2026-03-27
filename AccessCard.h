#ifndef ACCESSCARD_H
#define ACCESSCARD_H

#include <iostream>
#include <string>
using namespace std;

class AccessCard {
    private:
    string cardID;
    int    accessLevel; 
 
public:
    // Constructor
    AccessCard(string cardID = "", int accessLevel = 0);
    // Public getters
    string getCardID() const;
    int getAccessLevel() const;
    // Prints card details
    void displayCardInfo() const;
};

#endif