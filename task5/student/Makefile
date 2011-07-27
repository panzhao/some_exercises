main:main.o student.o
	gcc -o main main.o student.o
main.o:main.c student.h
	gcc -g -c main.c
student.o:student.c
	gcc -g -c student.c
clean:
	rm -f *.o
