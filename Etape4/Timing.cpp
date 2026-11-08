#include "Timing.h"
#include <iostream>

using namespace std;

namespace planning {
    const string Timing::MONDAY = "Lundi";
    const string Timing::TUESDAY = "Mardi";
    const string Timing::WEDNESDAY = "Mercredi";
    const string Timing::THURSDAY = "Jeudi";
    const string Timing::FRIDAY = "Vendredi";
    const string Timing::SATURDAY = "Samedi";
    const string Timing::SUNDAY = "Dimanche";

    Timing::Timing() {
        day = MONDAY;
        cout << "--- Trace : Constructeur par defaut Timing" << endl;
    }
    Timing::Timing(string d, const Time& s, const Time& dur) : start(s), duration(dur) {
        day = d;
        cout << "--- Trace : Constructeur d'init Timing" << endl;
    }
    Timing::Timing(const Timing& t) : start(t.start), duration(t.duration) {
        day = t.day;
        cout << "--- Trace : Constructeur de copie Timing" << endl;
    }
    Timing::~Timing() {
        cout << "--- Trace : Destructeur Timing" << endl;
    }

    void Timing::setDay(string d) { day = d; }
    void Timing::setStart(const Time& s) { start = s; }
    void Timing::setDuration(const Time& dur) { duration = dur; }
    string Timing::getDay() const { return day; }
    Time Timing::getStart() const { return start; }
    Time Timing::getDuration() const { return duration; }

    void Timing::display() const {
        cout << day << " a ";
        start.display();
        cout << " (";
        duration.display(); 
        cout << ")" << endl;
    }

    static int getDayRank(const std::string& d) {
        if (d == Timing::MONDAY) return 1;
        if (d == Timing::TUESDAY) return 2;
        if (d == Timing::WEDNESDAY) return 3;
        if (d == Timing::THURSDAY) return 4;
        if (d == Timing::FRIDAY) return 5;
        if (d == Timing::SATURDAY) return 6;
        if (d == Timing::SUNDAY) return 7;
        return 8;
    }

    int Timing::operator<(const Timing& t) const {
        if (getDayRank(day) != getDayRank(t.day)) return getDayRank(day) < getDayRank(t.day);
        if (!(start == t.start)) return start < t.start;
        return duration < t.duration;
    }
    int Timing::operator>(const Timing& t) const {
        if (getDayRank(day) != getDayRank(t.day)) return getDayRank(day) > getDayRank(t.day);
        if (!(start == t.start)) return start > t.start;
        return duration > t.duration;
    }
    int Timing::operator==(const Timing& t) const {
        return day == t.day && start == t.start && duration == t.duration;
    }
}