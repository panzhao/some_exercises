main:main.o operate_stack.o
	gcc -o main main.o operate_stack.o
main.o:main.c operate_stack.h
	gcc -g -c main.c
operate_stack.o:operate_stack.c
	gcc -g -c operate_stack.c
clean:
	rm -f *.o
	
