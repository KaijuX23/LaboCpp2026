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
		cout << "--- Trace : Constructeur par défaut Timing" << endl;
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

    // Setters
    void Timing::setDay(string d) { day = d; }
    void Timing::setStart(const Time& s) { start = s; }
    void Timing::setDuration(const Time& dur) { duration = dur; }

    // Getters
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
}