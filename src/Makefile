#Makefile for Datagenerator
CC=c++
CFLAGS=-std=c++11
test_dg_firstname: datagenerator.o test_dg_firstname.cpp
	$(CC) $(CFLAGS) datagenerator.o test_dg_firstname.cpp -o test_dg_firstname
datagenerator.o: datagenerator.cpp
	$(CC) $(CFLAGS) -c datagenerator.cpp

