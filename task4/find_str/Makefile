main:main.o find_str.o
	gcc -o main main.o find_str.o
main.o:main.c count_str.h
	gcc -c main.c
find_str.o:find_str.c
	gcc -c find_str.c
clean:
	rm -f *.o
