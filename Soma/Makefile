#Makefile for "somaDados" C++ application
#Created by Hand 22/02/2017

PROG = somaDados
CC = g++
cppflags = -O0 -g -W -Wall -pedantic
OBJS = main.o somaDados.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o: somaDados.hpp 
	$(CC) $(CPPFLAGS) -c main.cpp

somaDados.o: somaDados.hpp
	$(CC) $(CPPFLAGS) -c somaDados.cpp

clean:
	rm -f *.o
