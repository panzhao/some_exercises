main:main.o count_bit.o
	gcc -o main main.o count_bit.o
main.o:main.c count_bit.h
	gcc -c main.c
count_bit.o:count_bit.c
	gcc -c count_bit.c
clean:
	rm -f *.o

