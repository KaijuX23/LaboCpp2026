#ifndef TIME_H
#define TIME_H
#include <iostream>

namespace planning {
    class Time {
    private :
        int hour;
        int minute;
    public :
        Time(); 
        Time(int h, int m); 
        Time(int m); 
        Time(const Time& t); 
        ~Time(); 

        Time& operator=(const Time& t);
        Time operator+(int m) const;
        Time operator+(const Time& t) const;
        friend Time operator+(int m, const Time& t);
        Time operator-(int m) const;
        Time operator-(const Time& t) const;
        friend Time operator-(int m, const Time& t);

        int operator<(const Time& t) const;
        int operator>(const Time& t) const;
        int operator==(const Time& t) const;

        friend std::ostream& operator<<(std::ostream& s, const Time& t);
        friend std::istream& operator>>(std::istream& s, Time& t);

        Time operator++();
        Time operator++(int);
        Time operator--();
        Time operator--(int);

        void setHour(int h);
        void setMinute(int m);
        int getHour() const;
        int getMinute() const;
        void display() const;
    };
}
#endif