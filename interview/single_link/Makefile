main:main.o single_link.o
	gcc -o main main.o single_link.o
main.o:main.c single_link.h
	gcc -c main.c
single_link.o:single_link.c
	gcc -c single_link.c
clean:
	rm -f *.o
