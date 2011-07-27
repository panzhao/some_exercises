main:main.o reverse_print.o
	gcc -o main main.o reverse_print.o
main.o:main.c reverse_print.h
	gcc -c main.c
reverse_print.o:reverse_print.c
	gcc -c reverse_print.c
clean:
	rm -f *.o
