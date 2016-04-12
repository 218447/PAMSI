CPPFLAGS=-pedantic -Wall -Iinc -std=c++11

Lab3: obj/main.o obj/list.o obj/tab.o obj/stoper.o obj/quicksort.o
	g++ obj/main.o obj/list.o obj/tab.o obj/stoper.o -o lab3.out

obj/main.o: src/main.cpp inc/list.hh inc/stoper.hh inc/quicksort.hh
	g++ -c ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/quicksort.o: src/quicksort.cpp inc/quicksort.hh inc/list.hh
	g++ -c ${CPPFLAGS} -o obj/quicksort.o src/quicksort.cpp

obj/list.o: src/list.cpp inc/list.hh inc/tab.hh
	g++ -c ${CPPFLAGS} -o obj/list.o src/list.cpp
	
obj/tab.o: src/tab.cpp inc/tab.hh
	g++ -c ${CPPFLAGS} -o obj/tab.o src/tab.cpp
	
obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ -c ${CPPFLAGS} -o obj/stoper.o src/stoper.cpp
	
clean:
	rm -f core* Lab3 obj/*

remake:
	rm -f core* Lab3 obj/*
	make
	
obj:
	mkdir obj
	
