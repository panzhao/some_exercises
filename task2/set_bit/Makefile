main:main.o set_bit.o
	gcc -o main main.o set_bit.o
main.o:main.c set_bit.h
	gcc -c main.c
set_bit.o:set_bit.c
	gcc -c set_bit.c
clean:
	rm -f *.o
