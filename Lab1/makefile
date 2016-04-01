CPPFLAGS=-pedantic -Wall -Iinc -std=c++11

__start__: obj Lab1
	rm -f core*; ./Lab1
obj:
	mkdir obj
Lab1: obj/main.o obj/tab.o obj/tablicaTest.o obj/stoper.o
	g++ -o Lab1 obj/main.o obj/tab.o obj/tablicaTest.o obj/stoper.o

obj/main.o: src/main.cpp inc/tablicaTest.hh
	g++ -c ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/tablicaTest.o: inc/tablicaTest.hh src/tablicaTest.cpp inc/tab.hh\
                   inc/stoper.hh inc/interf.hh
	g++ -c ${CPPFLAGS} -o obj/tablicaTest.o src/tablicaTest.cpp

obj/tab.o: src/tab.cpp inc/tab.hh
	g++ -c ${CPPFLAGS} -o obj/tab.o src/tab.cpp

obj/stoper.o: inc/stoper.hh src/stoper.cpp
	g++ -c ${CPPFLAGS} -o obj/stoper.o src/stoper.cpp

clean:
	rm -f core* Lab1 obj/*

remake:
	rm -f core* Lab1 obj/*
	make

