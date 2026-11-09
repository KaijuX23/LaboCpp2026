Test4: Test4.o Event.o Time.o Timing.o Schedulable.o Professor.o Group.o Classroom.o
	g++ -o Test4 Test4.o Event.o Time.o Timing.o Schedulable.o Professor.o Group.o Classroom.o

Test4.o: Test4.cpp Event.h Time.h Timing.h Schedulable.h Professor.h Group.h Classroom.h
	g++ -c Test4.cpp -o Test4.o

Event.o: Event.cpp Event.h Timing.h
	g++ -c Event.cpp -o Event.o

Time.o: Time.cpp Time.h
	g++ -c Time.cpp -o Time.o

Timing.o: Timing.cpp Timing.h Time.h
	g++ -c Timing.cpp -o Timing.o

Schedulable.o: Schedulable.cpp Schedulable.h
	g++ -c Schedulable.cpp -o Schedulable.o

Professor.o: Professor.cpp Professor.h Schedulable.h
	g++ -c Professor.cpp -o Professor.o

Group.o: Group.cpp Group.h Schedulable.h
	g++ -c Group.cpp -o Group.o

Classroom.o: Classroom.cpp Classroom.h Schedulable.h
	g++ -c Classroom.cpp -o Classroom.o