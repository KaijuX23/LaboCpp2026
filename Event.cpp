#include "Event.h"
#include <iostream>
#include <cstring>

using namespace std;

Event::Event() {
    title = new char[200];
    code = 1;
    strcpy(title, "default");
    cout << "--- Trace : constructeur par defaut" << endl;
}

Event::Event(int c, const char* t) {
    title = new char[200];
    code = c;
    strcpy(title, t);
    cout << "--- Trace : constructeur d'initialisation" << endl;
}

Event::Event(const Event& e) {
    title = new char[200];
    code = e.code;
    strcpy(title, e.title);
    cout << "--- Trace : constructeur de copie" << endl;
}

Event::~Event() {
    delete[] title;
    cout << "--- Trace : destructeur" << endl;
}

void Event::setCode(int c) {
    if (c <= 0) return;
    code = c;
}

void Event::setTitle(const char* t) {
    if (strlen(t) == 0) return;
    strcpy(title, t);
}

int Event::getCode() { return code; }
char* Event::getTitle() { return title; }

void Event::display() {
    cout << "Code = " << code << endl;
    cout << "Title = " << title << endl;
}