CPPFLAGS=-pedantic -Wall -Iinc -std=c++11

test: obj/test.o obj/list.o obj/tab.o obj/stoper.o
	g++ obj/test.o obj/list.o obj/tab.o obj/stoper.o -o test.out

obj/test.o: src/test.cpp inc/list.hh inc/stoper.hh
	g++ -c ${CPPFLAGS} -o obj/test.o src/test.cpp

obj/list.o: src/list.cpp inc/list.hh inc/tab.hh
	g++ -c ${CPPFLAGS} -o obj/list.o src/list.cpp

obj/tab.o: src/tab.cpp inc/tab.hh
	g++ -c ${CPPFLAGS} -o obj/tab.o src/tab.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ -c ${CPPFLAGS} -o obj/stoper.o src/stoper.cpp

clean:
	rm -f core* test.out obj/*

remake:
	rm -f core* test.out obj/*
	make

obj:
	mkdir obj

