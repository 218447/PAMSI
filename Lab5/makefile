FLAGS = -Iinc -pedantic -Wall -std=c++11

__start__: obj TREE
	rm -f core*; ./TREE

TREE: obj/main.o obj/Tree.o obj/stoper.o
	g++ -o TREE obj/main.o obj/Tree.o obj/stoper.o

obj/main.o: src/main.cpp inc/stoper.hh inc/Tree.hh
	g++ -c ${FLAGS} -o obj/main.o src/main.cpp

obj/Tree.o: src/Tree.cpp inc/Tree.hh inc/tab.hh
	g++ -c ${FLAGS} -o obj/Tree.o src/Tree.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ -c ${FLAGS} -o obj/stoper.o src/stoper.cpp

clean:
	rm -f core* TREE obj/*

remake:
	rm -f core* TREE obj/*
	make

obj:
	mkdir obj
