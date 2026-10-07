#ifndef TIME_H
#define TIME_H

namespace planning {
	class Time {
	private :
		int hour;
		int minute;
	public :
		Time(); //départ
		Time(int h, int m); //init
		Time(int m); //init en min
		Time(const Time& t); //copie
		~Time(); //destructeur

		void setHour(int h);
		void setMinute(int m);
		int getHour() const;
		int getMinute() const;
		void display() const;
	};
}
#endif