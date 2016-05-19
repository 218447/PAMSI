FLAGS = -Iinc -pedantic -Wall -std=c++11

__start__: obj BAB
	rm -f core*; ./BAB

BAB: obj/main.o obj/BAB.o obj/queue.o obj/tab.o obj/stoper.o
	g++ -o BAB obj/main.o obj/BAB.o obj/queue.o  obj/tab.o\
	           obj/stoper.o 

obj/main.o: src/main.cpp inc/stoper.hh inc/BAB.hh 
	g++ -c ${FLAGS} -o obj/main.o src/main.cpp

obj/BAB.o: src/BAB.cpp inc/BAB.hh inc/queue.hh
	g++ -c ${FLAGS} -o obj/BAB.o src/BAB.cpp

obj/queue.o: src/queue.cpp inc/queue.hh inc/tab.hh
	g++ -c ${FLAGS} -o obj/queue.o src/queue.cpp

obj/tab.o: src/tab.cpp inc/tab.hh
	g++ -c ${FLAGS} -o obj/tab.o src/tab.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ -c ${FLAGS} -o obj/stoper.o src/stoper.cpp

clean: 
	rm -f core* BAB obj/*

remake:
	rm -f core* BAB obj/*
	make

obj:
	mkdir obj
