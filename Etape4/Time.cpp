#include "Time.h"
#include <iostream>

using namespace std;

namespace planning {
    Time::Time(){
        hour = 0;
        minute = 0;
    }
    Time::Time(int h, int m) {
        hour = h;
        minute = m;
    }
    Time::Time(int m) {
        hour = m / 60;
        minute = m % 60;
    }
    Time::Time(const Time& t) {
        hour = t.hour;
        minute = t.minute;
    }
    Time::~Time() {
    }

    void Time::setHour(int h) { hour = h; }
    void Time::setMinute(int m) { minute = m; }
    int Time::getHour() const { return hour; }
    int Time::getMinute() const { return minute; }

    void Time::display() const {
        if (hour < 10) cout << "0";
        cout << hour << "h";
        if (minute < 10) cout << "0";
        cout << minute;
    }

    Time& Time::operator=(const Time& t) {
        hour = t.hour;
        minute = t.minute;
        return *this;
    }
    Time Time::operator+(int m) const {
        return Time((hour * 60) + minute + m);
    }
    Time Time::operator+(const Time& t) const {
        return Time((hour * 60) + minute + (t.hour * 60) + t.minute);
    }
    Time operator+(int m, const Time& t) {
        return t + m;
    }
    Time Time::operator-(int m) const {
        int tot = (hour * 60) + minute - m;
        return Time(tot < 0 ? 0 : tot);
    }
    Time Time::operator-(const Time& t) const {
        int tot = ((hour * 60) + minute) - ((t.hour * 60) + t.minute);
        return Time(tot < 0 ? 0 : tot);
    }
    Time operator-(int m, const Time& t) {
        int tot = m - ((t.hour * 60) + t.minute);
        return Time(tot < 0 ? 0 : tot);
    }

    int Time::operator<(const Time& t) const {
        return ((hour * 60) + minute) < ((t.hour * 60) + t.minute);
    }
    int Time::operator>(const Time& t) const {
        return ((hour * 60) + minute) > ((t.hour * 60) + t.minute);
    }
    int Time::operator==(const Time& t) const {
        return (hour == t.hour && minute == t.minute);
    }

    ostream& operator<<(ostream& s, const Time& t) {
        if (t.hour < 10) s << "0";
        s << t.hour << "h";
        if (t.minute < 10) s << "0";
        s << t.minute;
        return s;
    }
    istream& operator>>(istream& s, Time& t) {
        char h;
        s >> t.hour >> h >> t.minute;
        return s;
    }

    Time Time::operator++() {
        *this = *this + 30;
        return *this;
    }
    Time Time::operator++(int) {
        Time temp(*this);
        *this = *this + 30;
        return temp;
    }
    Time Time::operator--() {
        *this = *this - 30;
        return *this;
    }
    Time Time::operator--(int) {
        Time temp(*this);
        *this = *this - 30;
        return temp;
    }
}