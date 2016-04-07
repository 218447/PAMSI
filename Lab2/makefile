CPPFLAGS=-pedantic -Wall -Iinc -std=c++11

__start__: obj Lab2
	rm -f core*; ./Lab2
obj:
	mkdir obj
Lab2: obj/main.o obj/list.o obj/tab.o obj/stoper.o
	g++ -o Lab2 obj/main.o obj/list.o obj/tab.o obj/stoper.o

obj/main.o: src/main.cpp inc/list.hh inc/stoper.hh
	g++ -c ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/list.o: src/list.cpp inc/list.hh inc/tab.hh
	g++ -c ${CPPFLAGS} -o obj/list.o src/list.cpp
obj/tab.o: src/tab.cpp inc/tab.hh
	g++ -c ${CPPFLAGS} -o obj/tab.o src/tab.cpp
obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ -c ${CPPFLAGS} -o obj/stoper.o src/stoper.cpp
clean:
	rm -f core* Lab2 obj/*

remake:
	rm -f core* Lab2 obj/*
	make
