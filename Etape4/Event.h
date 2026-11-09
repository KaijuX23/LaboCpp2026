#ifndef EVENT_H
#define EVENT_H
#include "Timing.h"

namespace planning {
    class Event {
    protected:
        int code;
        char* title;
        Timing* timing;

    public:
        static int currentCode;

        Event();
        Event(int c, const char* t);
        Event(const Event& e);
        virtual ~Event();

        void setCode(int c);
        void setTitle(const char* t);
        void setTiming(const Timing& t);

        int getCode() const;
        const char* getTitle() const;
        Timing getTiming() const;

        virtual void display() const;
    };
}
#endif

