FLAGS = -Iinc -pedantic -Wall -std=c++11

__start__: obj TA
	rm -f core*; ./TA

TA: obj/main.o obj/TablicaAsocjacyjna.o obj/TablicaHash.o obj/listElement.o\
               obj/list.o obj/tab.o obj/stoper.o
	g++ -o TA obj/main.o obj/TablicaAsocjacyjna.o obj/TablicaHash.o\ 
		  obj/list.o obj/listElement.o obj/tab.o obj/stoper.o 

obj/main.o: src/main.cpp inc/stoper.hh inc/TablicaAsocjacyjna.hh
	g++ -c ${FLAGS} -o obj/main.o src/main.cpp

obj/TablicaAsocjacyjna.o: src/TablicaAsocjacyjna.cpp inc/TablicaAsocjacyjna.hh\			  	  inc/TablicaHash.hh
	g++ -c ${FLAGS} -o obj/TablicaAsocjacyjna.o src/TablicaAsocjacyjna.cpp

obj/TablicaHash.o: src/tablicaHash.cpp inc/TablicaHash.hh inc/list.hh
	g++ -c ${FLAGS} -o obj/TablicaHash.o src/TablicaHash.cpp

obj/List.o: src/List.cpp inc/List.hh inc/listElement.hh
	g++ -c ${FLAGS} -o obj/List.o src/List.cpp

obj/tab.o: src/tab.cpp inc/tab.hh
	g++ -c ${FLAGS} -o obj/tab.o src/tab.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ -c ${FLAGS} -o obj/stoper.o src/stoper.cpp

obj/listElement.o:src/listElement.cpp inc/listElement.hh
	g++ -c ${FLAGS} -o obj/listElement.o src/listElement.hh

clean: 
	rm -f core* TA obj/*

remake:
	rm -f core* TA obj/*
	make

obj:
	mkdir obj
