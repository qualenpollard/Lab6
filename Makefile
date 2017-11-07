#———————————————————————————————————————————————————————————————————————————————
#File: Makefile
#Author: Qualen Pollard
#Date: 11.6.17
#Description: Makefile for the lab 6 program.
#———————————————————————————————————————————————————————————————————————————————
prog: main.o LinkedListOfInts.o Tests.o
	g++ -g -Wall -std=c++11 main.o LinkedListOfInts.o Tests.o -o prog


main.o: main.cpp Tests.h
	g++ -g -Wall -std=c++11 -c main.cpp

Tests.o: Tests.h Tests.cpp LinkedListOfInts.h
	g++ -g -Wall -std=c++11 -c  Tests.cpp


clean:
	rm main.o *.*~ prog
