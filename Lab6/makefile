FLAGS = -Iinc -pedantic -Wall -std=c++11

__start__: obj BFS
	rm -f core*; ./BFS

BFS: obj/main.o obj/BFS.o obj/queue.o obj/tab.o obj/stoper.o
	g++ -o BFS obj/main.o obj/BFS.o obj/queue.o  obj/tab.o obj/stoper.o 

obj/main.o: src/main.cpp inc/stoper.hh inc/BFS.hh
	g++ -c ${FLAGS} -o obj/main.o src/main.cpp

obj/BFS.o: src/BFS.cpp inc/BFS.hh inc/queue.hh
	g++ -c ${FLAGS} -o obj/BFS.o src/BFS.cpp

obj/queue.o: src/queue.cpp inc/queue.hh inc/tab.hh
	g++ -c ${FLAGS} -o obj/queue.o src/queue.cpp

obj/tab.o: src/tab.cpp inc/tab.hh
	g++ -c ${FLAGS} -o obj/tab.o src/tab.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ -c ${FLAGS} -o obj/stoper.o src/stoper.cpp

clean: 
	rm -f core* BFS obj/*

remake:
	rm -f core* BFS obj/*
	make

obj:
	mkdir obj
