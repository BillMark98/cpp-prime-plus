CC = g++
CFLAGS = -g -Wall
SRC = benevelent.cpp

main: main.cpp benevelent.o
	$(CC) $(CFLAGS) -o $@ $^

benevelent.o: benevelent.cpp benevelent.h
	$(CC) $(CFLAGS) -c $< 

