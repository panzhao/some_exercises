main:main.o print_head_tail.o
	gcc -o main main.o print_head_tail.o
main.o:main.c print_head_tail.h
	gcc -c main.c
print_head_tail.o:print_head_tail.c
	gcc -c print_head_tail.c
clean:
	rm -f *.o
