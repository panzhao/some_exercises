main:main.o count_summetry.o
	gcc -o main main.o count_summetry.o
main.o:main.c count_summetry.h
	gcc -c main.c
count_summetry.o:count_summetry.c
	gcc -c count_summetry.c
clean:
	rm -f *.o
