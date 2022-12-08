CC = gcc
CFLAGS = -Wall -g

.PHONY: clean all

all: connections

connections: main.o my_mat.o
	$(CC) $(CFLAGS) main.o my_mat.o -o connections

main.o: main.c
	$(CC) $(FLAGS) -c main.c
	
my_mat.o: my_mat.c
	$(CC) $(FLAGS) -c my_mat.c

clean:
	rm -f *.o connnections