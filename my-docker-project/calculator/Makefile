# Makefile example

CC=gcc
CFLAGS=-Wall

# Target to build the executable
all: calculator

# Linking the object files to create the final executable
calculator: main.o calculator.o
	$(CC) $(CFLAGS) -o calculator main.o calculator.o

# Compile main.c into an object file
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

# Compile calculator.c into an object file
calculator.o: calculator.c
	$(CC) $(CFLAGS) -c calculator.c

# Clean up intermediate files and the executable
clean:
	rm -f *.o calculator

