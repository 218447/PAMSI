FLAGS = -Iincs -pedantic -Wall -std=c++11

__start__: obj GRAPH
	rm -f core*; ./GRAPH

GRAPH: obj/main.o obj/Graph.o obj/list.o obj/tab.o
	g++ -o GRAPH obj/main.o obj/Graph.o obj/list.o obj/tab.o

obj/main.o: src/main.cpp inc/Graph.hh
	g++ -c ${FLAGS} -o obj/main.o src/main.cpp

obj/Graph.o: src/Graph.cpp inc/Graph.hh inc/IGraph.hh
	g++ -c ${FLAGS} -o obj/Graph.o src/Graph.cpp

obj/list.o: src/list.cpp inc/list.hh inc/tab.hh
	g++ -c ${FLAGS} -o obj/list.o src/list.cpp

obj/tab.o: src/tab.cpp inc/tab.hh
	g++ -c ${FLAGS} -o obj/tab.o src/tab.cpp

clean:
	rm -f core* GRAPH obj/*

remake:
	rm -f core* GRAPH obj/*
	make

obj:
	mkdir obj
