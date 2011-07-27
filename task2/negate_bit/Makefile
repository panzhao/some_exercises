main:main.o negate_bit.o
	gcc -o main main.o negate_bit.o
main.o:main.c
	gcc -c main.c
negate_bit.o :negate_bit.c
	gcc -c negate_bit.c
clean:
	rm -f *.o
