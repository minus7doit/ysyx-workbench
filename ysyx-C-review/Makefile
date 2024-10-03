CFLAGS=-Wall -g
CC=gcc
executable= ex1 ex3 ex4
all: $(executable)

ex1:ex1.o
	gcc $(CFLAGS) $< -o $@
ex3:ex3.o
	gcc $(CFLAGS) $< -o $@
ex4:ex4.o
	gcc $(CFLAGS) $< -o $@

.c.o:
	gcc $(CFLAGS) -c $< -o $@


clean:
	rm -f *.o executable;
