output: main.o vector.o
	gcc main.o vector.o -o output

main.o: main.c
	gcc -c main.c

vector.o: vector.h vector.c
	gcc -c vector.c

clean:
	rm *.o output
