FLAGS = -Iinc -pedantic -Wall -std=c++11

__start__: obj QS
	rm -f core*; ./QS

QS: obj/main.o obj/QuickSort.o obj/List.o 
	g++ -o QS obj/main.o obj/QuickSort.o obj/List.o

obj/main.o: src/main.cpp inc/Stoper.h
	g++ -c ${FLAGS} -o obj/main.o src/main.cpp

obj/QuickSort.o: src/QuickSort.cpp inc/QuickSort.hh inc/IQuickSort.hh inc/List.h
	g++ -c ${FLAGS} -o obj/QuickSort.o src/QuickSort.cpp

obj/List.o: src/List.cpp inc/List.h inc/IList.h
	g++ -c ${FLAGS} -o obj/List.o src/List.cpp

clean: 
	rm -f core* QS obj/*

remake:
	rm -f core* QS obj/
	make
