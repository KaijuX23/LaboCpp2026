#ifndef CLASSROOM_H
#define CLASSROOM_H

#include "Schedulable.h"
#include <string>
#include <iostream>

class Classroom : public Schedulable {
protected:
    std::string name;
    int seatingCapacity;

public:
    Classroom();
    Classroom(int id, std::string name, int seatingCapacity);

    void setName(std::string name);
    std::string getName() const;
    void setSeatingCapacity(int seatingCapacity);
    int getSeatingCapacity() const;

    std::string toString() const override;
    std::string tuple() const override;
    Classroom& operator=(const Classroom& other);
};

std::ostream& operator<<(std::ostream& os, const Classroom& c);

#endif