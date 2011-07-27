main:main.o reverse_sort.o
	gcc -o main main.o reverse_sort.o
main.o:main.c reverse_sort.h
	gcc -g -c main.c
reverse_sort.o:reverse_sort.c
	gcc -g -c reverse_sort.c
clean:
	rm -f *.o
