#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Schedulable.h"
#include <string>
#include <iostream>

class Professor : public Schedulable {
protected:
    std::string lastName;
    std::string firstName;

public:
    Professor();
    Professor(int id, std::string lastName, std::string firstName);

    void setLastName(std::string lastName);
    void setFirstName(std::string firstName);
    std::string getLastName() const;
    std::string getFirstName() const;

    std::string toString() const override;
    std::string tuple() const override;
    Professor& operator=(const Professor& other);
};

std::ostream& operator<<(std::ostream& os, const Professor& p);

#endif