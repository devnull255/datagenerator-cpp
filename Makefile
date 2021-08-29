#makefile
CC = c++
CFLAGS = -std=c++11
SRCDIR = src
LIBDIR = lib
BINDIR = bin

$(BINDIR)/dg: $(LIBDIR)/datagenerator.o $(SRCDIR)/dg.cpp
	mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) $(LIBDIR)/datagenerator.o $(SRCDIR)/dg.cpp -o $(BINDIR)/dg

$(LIBDIR)/datagenerator.o: $(SRCDIR)/datagenerator.cpp
	mkdir -p $(LIBDIR)
	$(CC) -c $(CFLAGS) $(SRCDIR)/datagenerator.cpp -o $(LIBDIR)/datagenerator.o

$(BINDIR)/test_dg_firstname: $(LIBDIR)/datagenerator.o $(SRCDIR)/test_dg_firstname.cpp
	$(CC) $(CFLAGS) $(LIBDIR)/datagenerator.o $(SRCDIR)/test_dg_firstname.cpp -o $(BINDIR)/test_dg_firstname

$(BINDIR)/test_dg_lastname: $(LIBDIR)/datagenerator.o $(SRCDIR)/test_dg_lastname.cpp
	$(CC) $(CFLAGS) $(LIBDIR)/datagenerator.o $(SRCDIR)/test_dg_lastname.cpp -o $(BINDIR)/test_dg_lastname

$(BINDIR)/test_dg_state: $(LIBDIR)/datagenerator.o $(SRCDIR)/test_dg_state.cpp
	$(CC) $(CFLAGS) $(LIBDIR)/datagenerator.o $(SRCDIR)/test_dg_state.cpp -o $(BINDIR)/test_dg_state

$(BINDIR)/test_dg_city: $(LIBDIR)/datagenerator.o $(SRCDIR)/test_dg_city.cpp
	$(CC) $(CFLAGS) $(LIBDIR)/datagenerator.o $(SRCDIR)/test_dg_city.cpp -o $(BINDIR)/test_dg_city

$(BINDIR)/test_dg_alpha: $(LIBDIR)/datagenerator.o $(SRCDIR)/test_dg_alpha.cpp 
	$(CC) $(CFLAGS) $(LIBDIR)/datagenerator.o $(SRCDIR)/test_dg_alpha.cpp -o $(BINDIR)/test_dg_alpha

all: $(BINDIR)/dg $(BINDIR)/test_dg_lastname $(BINDIR)/test_dg_firstname $(BINDIR)/test_dg_city $(BINDIR)/test_dg_state $(BINDIR)/test_dg_alpha

clean:
	rm -rf $(BINDIR)
	rm -rf $(LIBDIR)
	find . -name '*.o' -exec rm -f \{\} \;

test:
	bin/test_dg_firstname
	bin/test_dg_lastname
	bin/test_dg_city
	bin/test_dg_state
	bin/test_dg_alpha
