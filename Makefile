#makefile
CC = c++
CFLAGS = -std=c++11

dg: datagenerator.o 
	$(CC) $(CFLAGS) datagenerator.o dg.cpp -o ../dg

datagenerator.o:
	$(CC) -c $(CFLAGS) datagenerator.cpp

test_dg_firstnames: datagenerator.o
	$(CC) datagenerator.o test_dg_firstnames.cpp -o test_dg_firstnames

clean:
	rm -f ../dg
	rm *.o
