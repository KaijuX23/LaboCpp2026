#include "Professor.h"

Professor::Professor() : Schedulable() {
    this->lastName = "";
    this->firstName = "";
}

Professor::Professor(int id, std::string lastName, std::string firstName) : Schedulable(id) {
    this->lastName = lastName;
    this->firstName = firstName;
}

void Professor::setLastName(std::string lastName) {
    this->lastName = lastName;
}

void Professor::setFirstName(std::string firstName) {
    this->firstName = firstName;
}

std::string Professor::getLastName() const {
    return this->lastName;
}

std::string Professor::getFirstName() const {
    return this->firstName;
}

std::string Professor::toString() const {
    return this->lastName + " " + this->firstName;
}

std::string Professor::tuple() const {
    return std::to_string(this->id) + ";" + this->lastName + ";" + this->firstName;
}

Professor& Professor::operator=(const Professor& other) {
    if (this != &other) {
        this->id = other.id;
        this->lastName = other.lastName;
        this->firstName = other.firstName;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Professor& p) {
    os << p.toString();
    return os;
}