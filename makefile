all: main.o list.o lib.o
	gcc -o project00 main.o list.o lib.o

main.o: main.c list.h lib.h
	gcc -c main.c

list.o: list.c list.h
	gcc -c list.c

lib.o: lib.c lib.h
	gcc -c lib.c

clean:
	rm *.o
	rm project00

run:
	./project00
