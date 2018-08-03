all: main cleanup

main: stream.o firmata.o main.o
	g++ main.o Firmata.o stream.o -o main

main.o: main.cpp
	g++ -c main.cpp

firmata.o: src/Firmata.cpp
	g++ -c src/Firmata.cpp

stream.o: src/stream.cpp
	g++ -c src/stream.cpp

cleanup:
	rm *.o

clean: cleanup
	rm main