#include "Schedulable.h"

Schedulable::Schedulable() {
    this->id = 0;
}

Schedulable::Schedulable(int id) {
    this->id = id;
}

Schedulable::~Schedulable() {
}

int Schedulable::getId() const {
    return this->id;
}

void Schedulable::setId(int id) {
    this->id = id;
}