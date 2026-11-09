#ifndef SCHEDULABLE_H
#define SCHEDULABLE_H

#include <string>

class Schedulable {
protected:
    int id;

public:
    Schedulable();
    Schedulable(int id);
    virtual ~Schedulable();

    int getId() const;
    void setId(int id);

    virtual std::string toString() const = 0;
    virtual std::string tuple() const = 0;
};

#endif