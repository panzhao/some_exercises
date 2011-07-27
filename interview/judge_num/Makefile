main:main.o judge_symmetry.o
	gcc -o main main.o judge_symmetry.o
main.o:main.c judge_symmetry.h
	gcc -c main.c
judge_symmetry.o:judge_symmetry.c
	gcc -c judge_symmetry.c
clean:
	rm -f *.o
