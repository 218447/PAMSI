FLAGS = -Iinc -pedantic -Wall -std=c++11

__start__: obj TA
	rm -f core*; ./TA

TA: obj/main.o obj/TablicaAsocjacyjna.o obj/TablicaHash.o obj/list.o obj/tab.o\
	       obj/stoper.o
	g++ -o TA obj/main.o obj/TablicaAsocjacyjna.o obj/TablicaHash.o\
                  obj/list.o  obj/tab.o obj/stoper.o 

obj/main.o: src/main.cpp inc/stoper.hh inc/TablicaAsocjacyjna.hh
	g++ -c ${FLAGS} -o obj/main.o src/main.cpp

obj/TablicaAsocjacyjna.o: src/TablicaAsocjacyjna.cpp inc/TablicaAsocjacyjna.hh\
				inc/TablicaHash.hh
	g++ -c ${FLAGS} -o obj/TablicaAsocjacyjna.o src/TablicaAsocjacyjna.cpp

<<<<<<< HEAD
obj/TablicaHash.o: src/TablicaHash.cpp inc/TablicaHash.hh inc/list.hh inc/listElement.hh
	g++ -c ${FLAGS} -o obj/TablicaHash.o src/TablicaHash.cpp

obj/list.o: src/list.cpp inc/list.hh inc/listElement.hh
	g++ -c ${FLAGS} -o obj/list.o src/list.cpp
=======
obj/TablicaHash.o: src/TablicaHash.cpp inc/TablicaHash.hh inc/list.hh
	g++ -c ${FLAGS} -o obj/TablicaHash.o src/TablicaHash.cpp

obj/list.o: src/list.cpp inc/list.hh inc/listElement.hh
	g++ -c ${FLAGS} -o obj/list.o src/List.cpp
>>>>>>> c1ae83fa69278f017d5c631547d14ac8e84a9253

obj/tab.o: src/tab.cpp inc/tab.hh inc/list.hh
	g++ -c ${FLAGS} -o obj/tab.o src/tab.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ -c ${FLAGS} -o obj/stoper.o src/stoper.cpp

clean: 
	rm -f core* TA obj/*

remake:
	rm -f core* TA obj/*
	make

obj:
	mkdir obj
