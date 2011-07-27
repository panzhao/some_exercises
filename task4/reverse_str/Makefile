main:main.o reverse_str.o
	gcc -o main main.o reverse_str.o
main.o:main.c reverse_str.h
	gcc -c main.c
reverse_str.o:reverse_str.c
	gcc -c reverse_str.c
clean:
	rm -f *.o
