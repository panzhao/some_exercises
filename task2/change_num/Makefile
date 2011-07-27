main:main.o change_num.o
	gcc -o main main.o change_num.o
main.o:main.c change_num.h
	gcc -c main.c
change_num:change_num.c
	gcc -c change_num.c
clean:
	rm -f *.o
