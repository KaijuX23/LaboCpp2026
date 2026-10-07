Test2: Test2.o Event.o Time.o Timing.o
	g++ -o Test2 Test2.o Event.o Time.o Timing.o

Test2.o: Test2.cpp Event.h Time.h Timing.h
	g++ -c Test2.cpp -o Test2.o

Event.o: Event.cpp Event.h Timing.h
	g++ -c Event.cpp -o Event.o

Time.o: Time.cpp Time.h
	g++ -c Time.cpp -o Time.o

Timing.o: Timing.cpp Timing.h Time.h
	g++ -c Timing.cpp -o Timing.o