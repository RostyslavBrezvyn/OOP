#ifndef EXAM_H
#define EXAM_H

#include "Base.h"

class Exam : public Base {
private:
    int ticketNumber;
    double grade;

public:
    Exam();
    Exam(const string& name, int ticket, double grade);
    void setTicketNumber(int ticket);
    void setGrade(double grade);
    int getTicketNumber() const;
    double getGrade() const;
    void display() const override;
};

#endif

