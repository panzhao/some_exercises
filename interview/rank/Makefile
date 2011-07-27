main:main.o stratum.o
	gcc -o main main.o stratum.o
main.o:main.c stratum.h
	gcc -c main.c
stratum.o:stratum.c
	gcc -c stratum.c
clean:
	rm -f *.o
