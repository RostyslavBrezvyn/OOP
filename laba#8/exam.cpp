#include "Exam.h"
#include <iostream>
#include <stdexcept>

Exam::Exam() : Base(), ticketNumber(0), grade(0.0) {}

Exam::Exam(const string& name, int ticket, double grade) 
    : Base(name), ticketNumber(ticket), grade(grade) {}

void Exam::setTicketNumber(int ticket) {
    if (ticket < 0) {
        throw invalid_argument("Ticket number must be non-negative.");
    }
    ticketNumber = ticket;
}

void Exam::setGrade(double grade) {
    if (grade < 0.0 || grade > 100.0) {
        throw invalid_argument("Grade must be between 0 and 100.");
    }
    this->grade = grade;
}

int Exam::getTicketNumber() const {
    return ticketNumber;
}

double Exam::getGrade() const {
    return grade;
}

void Exam::display() const {
    Base::display();
    cout << "Ticket Number: " << ticketNumber << endl;
    cout << "Grade: " << grade << endl;
}

