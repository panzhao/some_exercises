main:main.o stack.o
	gcc -o main main.o stack.o
main.o:main.c stack.h
	gcc -c main.c
stack.o:stack.c
	gcc -c stack.c
clean:
	rm *.o
