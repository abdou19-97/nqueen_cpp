Nqueen: Nqueen.o main.o
	g++ -std=c++11 Nqueen.o main.o -o runQueen

Nqueen.o: Nqueen.cpp Nqueen.o
	g++ -std=c++11 -c Nqueen.cpp

main.o: main.cpp Nqueen.h
	g++ -c main.cpp

clean:
	rm -f*.o
	rm raceHorse

run: runQueen
	/runQueen
