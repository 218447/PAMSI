__start__: a.out
	./a.out
a.out: main.o tab.o tablicaTest.o stoper.o
	g++ main.o tab.o tablicaTest.o stoper.o
main.o: main.cpp tablicaTest.hh
	g++ -c -Wall -pedantic main.cpp
tablicaTest.o: tablicaTest.hh tablicaTest.cpp tab.hh stoper.hh interf.hh
	g++ -c -Wall -pedantic tablicaTest.cpp
tab.o: tab.cpp tab.hh
	g++ -c -Wall -pedantic tab.cpp
stoper.o: stoper.hh stoper.cpp
	g++ -c -Wall -pedantic stoper.cpp
