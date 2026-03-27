#ifndef TUTORINGSESSION_H
#define TUTORINGSESSION_H

#include "TeachingAssistant.h"
#include "AccessCard.h"
#include <iostream>
#include <string>
using namespace std;

class TutoringSession {
    private:
    int sessionID;
    double durationMinutes;
    TeachingAssistant* ta;       
    Student* student; 
 
public:
    // Constructor
    TutoringSession(int sessionID = 0, double durationMinutes= 0.0, TeachingAssistant* ta= nullptr, Student* student = nullptr);
    //getter
    double getDuration() const;
    // Prints details
    void displaySession() const;
    // MEMBER operator+
    TutoringSession operator+(const TutoringSession& other) const {
        TutoringSession t;
        t.durationMinutes = durationMinutes + other.durationMinutes;
        return t;
    }
    // non memebr operator> 
    friend bool operator>(const TutoringSession& s1, const TutoringSession& s2);
};

#endif