#include "Event.h"
#include <iostream>
#include <cstring>

using namespace std;

namespace planning {
    int Event::currentCode = 1;

    Event::Event() {
        code = currentCode++;
        title = new char[strlen("default") + 1];
        strcpy(title, "default");
        timing = nullptr;
        cout << "--- Trace : constructeur par defaut" << endl;
    }

    Event::Event(int c, const char* t) {
        code = c;
        currentCode = c + 1;
        title = new char[strlen(t) + 1];
        strcpy(title, t);
        timing = nullptr;
        cout << "--- Trace : constructeur d'initialisation" << endl;
    }

    Event::Event(const Event& e) {
        code = e.code;
        title = new char[strlen(e.title) + 1];
        strcpy(title, e.title);

        if (e.timing != nullptr) {
            timing = new Timing(*(e.timing));
        } else {
            timing = nullptr;
        }
        cout << "--- Trace : constructeur de copie" << endl;
    }

    Event::~Event() {
        delete[] title;
        if (timing != nullptr) {
            delete timing;
        }
        cout << "--- Trace : destructeur" << endl;
    }

    void Event::setCode(int c) {
        if (c <= 0) return;
        code = c;
    }

    void Event::setTitle(const char* t) {
        if (strlen(t) == 0) return;
        delete[] title;
        title = new char[strlen(t) + 1];
        strcpy(title, t);
    }

    void Event::setTiming(const Timing& t) {
        if (timing != nullptr) {
            delete timing; 
        }
        timing = new Timing(t);
    }

    int Event::getCode() const{ return code; }
    const char* Event::getTitle() const{ return title; }
    Timing Event::getTiming() const { return *timing; }

    void Event::display() const{
        cout << "Code = " << code << endl;
        cout << "Title = " << title << endl;
        if (timing != nullptr) {
            cout << "Timing : ";
            timing->display();
        } else {
            cout << "Timing : Non planifie" << endl;
        }
    }
}
