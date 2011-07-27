main:main.o group_sum.o
	gcc -o main main.o group_sum.o
main.o:main.c group_sum.h
	gcc -c main.c
group_sum.o:group_sum.c
	gcc -c group_sum.c
clean:
	rm -f *.o
