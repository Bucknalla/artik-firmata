all: main cleanup

main: stream.o firmata.o main.o
	g++ main.o firmata.o stream.o -o main

main.o: main.cpp
	g++ -c main.cpp

firmata.o: src/firmata.cpp
	g++ -c src/firmata.cpp

stream.o: src/stream.cpp
	g++ -c src/stream.cpp

cleanup:
	rm *.o

clean:
	rm main