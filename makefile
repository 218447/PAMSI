__start__: a.out
	./a.out
a.out: main.o tab.o
	g++ main.o tab.o
main.o: main.cpp tab.hh
	g++ -c -Wall -pedantic main.cpp
lab.o: tab.hh tab.cpp
	g++ -c -Wall -pedantic tab.cpp
