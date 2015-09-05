#makefile
CC = c++
CFLAGS = -std=c++11
SRCDIR = src
LIBDIR = lib
BINDIR = bin

$(BINDIR)/dg: $(LIBDIR)/datagenerator.o 
	mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) $(LIBDIR)/datagenerator.o $(SRCDIR)/dg.cpp -o $(BINDIR)/dg

$(LIBDIR)/datagenerator.o: $(SRCDIR)/datagenerator.cpp
	mkdir -p $(LIBDIR)
	$(CC) -c $(CFLAGS) $(SRCDIR)/datagenerator.cpp -o $(LIBDIR)/datagenerator.o

$(BINDIR)/test_dg_firstname: $(LIBDIR)/datagenerator.o $(SRCDIR)/test_dg_firstname.cpp
	$(CC) $(CFLAGS) $(LIBDIR)/datagenerator.o $(SRCDIR)/test_dg_firstname.cpp -o $(BINDIR)/test_dg_firstname
$(BINDIR)/test_dg_lastname: $(LIBDIR)/datagenerator.o $(SRCDIR)/test_dg_lastname.cpp
	$(CC) $(CFLAGS) $(LIBDIR)/datagenerator.o $(SRCDIR)/test_dg_lastname.cpp -o $(BINDIR)/test_dg_lastname

all: $(BINDIR)/dg $(BINDIR)/test_dg_lastname $(BINDIR)/test_dg_firstname

clean:
	rm -rf $(BINDIR)
	rm -rf $(LIBDIR)
	find . -name '*.o' -exec rm -f \{\} \;

test:
	bin/test_dg_firstname
	bin/test_dg_lastname
