#include "AccessCard.h"

   // Constructor
    AccessCard::AccessCard(string cardID, int accessLevel) {
        this->cardID = cardID;
        this->accessLevel = accessLevel;
    }
    // Public getters
    string AccessCard::getCardID() const {
        return cardID;
    }
    int AccessCard::getAccessLevel() const {
        return accessLevel;
    }
    // Prints card details
    void AccessCard::displayCardInfo() const {
        cout << "Card ID: "<< cardID << "\nAccess Level: "<< accessLevel << endl;
    }