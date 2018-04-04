#Makefile for "AtvDado" C++ application
#Created by Hand 22/02/2017

PROG = AtvDado
CC = g++
cppflags = -O0 -g -W -Wall -pedantic
OBJS = main.o dado.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o: dado.hpp 
	$(CC) $(CPPFLAGS) -c main.cpp

dado.o: dado.hpp
	$(CC) $(CPPFLAGS) -c dado.cpp

clean:
	rm -f *.o
