main:main.o change.o
	gcc -o main main.o change.o
main.o:main.c change.h
	gcc -c main.c
change.o:change.c
	gcc -c change.c
clean:
	rm -f *.o
