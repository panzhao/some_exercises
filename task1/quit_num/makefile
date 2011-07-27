main:main.o quit_num.o
	gcc -o main main.o quit_num.o
main.o:main.c quit_num.h
	gcc -g -c main.c
quit_num.o:quit_num.c
	gcc -g -c quit_num.c
clean:
	rm -f  *.o
