CC = g++

all: main.o bmp.o obj.o
	$(CC) main.o bmp.o obj.o -o test

bmp.o: bmp.cpp bmp.h
	$(CC) bmp.cpp -c -o bmp.o

obj.o: obj.cpp obj.h
	$(CC) obj.cpp -c -o obj.o

main.o: main.cpp Exceptions.h
	$(CC) main.cpp -c -o main.o
