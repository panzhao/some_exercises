main:main.o strstr.o
	gcc -o main main.o strstr.o
main.o:main.c strstr.h
	gcc -c main.c
strstr.o:strstr.c
	gcc -c strstr.c
clean:
	rm -f *.o
