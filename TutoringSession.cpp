#include "TutoringSession.h"

 // Constructor
    TutoringSession::TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student) {
        this->ta = ta;
        this->student = student;
        this->sessionID = sessionID;
        this->durationMinutes = durationMinutes;
    }

    double TutoringSession::getDuration() const {
        return durationMinutes;
    }

    void TutoringSession::displaySession() const {
        cout << "Session ID: "<< sessionID << "\nTime Duration in min: "<< durationMinutes << endl;
    }

    bool operator>(const TutoringSession& s1, const TutoringSession& s2) {
        if (s1.durationMinutes>s2.durationMinutes) {
            return true;
        }
        else {
            return false;
        }
    }