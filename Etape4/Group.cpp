#include "Group.h"

Group::Group() : Schedulable() {
    this->name = "";
}

Group::Group(int id, std::string name) : Schedulable(id) {
    this->name = name;
}

void Group::setName(std::string name) {
    this->name = name;
}

std::string Group::getName() const {
    return this->name;
}

std::string Group::toString() const {
    return this->name;
}

std::string Group::tuple() const {
    return std::to_string(this->id) + ";" + this->name;
}

Group& Group::operator=(const Group& other) {
    if (this != &other) {
        this->id = other.id;
        this->name = other.name;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Group& g) {
    os << g.toString();
    return os;
}