main:main.o search_student.o
	gcc -o main main.o search_student.o
main.o:main.c search_student.h
	gcc -g -c main.c
search_student.o:search_student.c
	gcc -g -c search_student.c
clean:
	rm -f *.o
