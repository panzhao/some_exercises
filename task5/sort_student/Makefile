main:main.o sort_student.o
	gcc -o main main.o sort_student.o
main.o:main.c sort_student.h
	gcc -g -c main.c
sort_student.o:sort_student.c
	gcc -g -c sort_student.c
clean:
	rm -f *.o
