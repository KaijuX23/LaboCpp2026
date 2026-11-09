#ifndef GROUP_H
#define GROUP_H

#include "Schedulable.h"
#include <string>
#include <iostream>

class Group : public Schedulable {
protected:
    std::string name;

public:
    Group();
    Group(int id, std::string name);

    void setName(std::string name);
    std::string getName() const;

    std::string toString() const override;
    std::string tuple() const override;
    Group& operator=(const Group& other);
};

std::ostream& operator<<(std::ostream& os, const Group& g);

#endif