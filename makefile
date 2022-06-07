f1.o: f1.h f1.cpp
		g++ -c f1.cpp

f2.o: f2.h f2.cpp
		g++ -c f2.cpp

main.o: main.cpp f1.h f2.h
		g++ -c main.cpp

main: f1.o f2.o main.o
		g++ f1.o f2.o main.o -o app
