main:main.o insert_str.o
	gcc -o main main.o insert_str.o
main.o:main.c insert_str.h
	gcc -c main.c
insert_str.o:insert_str.c
	gcc -c insert_str.c
clean:
	rm -f *.o
