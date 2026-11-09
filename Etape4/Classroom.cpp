#include "Classroom.h"

Classroom::Classroom() : Schedulable() {
    this->name = "";
    this->seatingCapacity = 0;
}

Classroom::Classroom(int id, std::string name, int seatingCapacity) : Schedulable(id) {
    this->name = name;
    this->seatingCapacity = seatingCapacity;
}

void Classroom::setName(std::string name) {
    this->name = name;
}

std::string Classroom::getName() const {
    return this->name;
}

void Classroom::setSeatingCapacity(int seatingCapacity) {
    this->seatingCapacity = seatingCapacity;
}

int Classroom::getSeatingCapacity() const {
    return this->seatingCapacity;
}

std::string Classroom::toString() const {
    return this->name + " (" + std::to_string(this->seatingCapacity) + ")";
}

std::string Classroom::tuple() const {
    return std::to_string(this->id) + ";" + this->name + " (" + std::to_string(this->seatingCapacity) + ")";
}

Classroom& Classroom::operator=(const Classroom& other) {
    if (this != &other) {
        this->id = other.id;
        this->name = other.name;
        this->seatingCapacity = other.seatingCapacity;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Classroom& c) {
    os << c.toString();
    return os;
}