main:main.o my_itoa.o
	gcc -o main main.o my_itoa.o
main.o:main.c my_itoa.h
	gcc -c main.c
my_itoa.o:my_itoa.c
	gcc -c my_itoa.c
clean: 
	rm -f *.o
