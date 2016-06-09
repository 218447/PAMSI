FLAGS = -g -Iinc -pedantic -Wall -std=c++11

prog.out: obj/main.o obj/Graph.o obj/stoper.o
	g++ ${FLAGS} obj/main.o obj/Graph.o obj/stoper.o -o prog.out

obj/main.o: src/main.cpp inc/Graph.hh inc/stoper.hh
	g++ ${FLAGS} -c src/main.cpp -o obj/main.o

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ ${FLAGS} -c src/stoper.cpp -o obj/stoper.o

obj/Graph.o: inc/Graph.hh src/Graph.cpp inc/queue.hh inc/list.hh
	g++ ${FLAGS} -c src/Graph.cpp -o obj/Graph.o

clean: 
	rm -f obj/*.o

obj:
	mkdir obj/
