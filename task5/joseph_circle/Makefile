main:main.o joseph_circle.o
	gcc -o main main.o joseph_circle.o -g
main.o:main.c joseph_circle.h
	gcc -c main.c
joseph_circle.o:joseph_circle.c
	gcc -c joseph_circle.c
clean:
	rm -f *.o

