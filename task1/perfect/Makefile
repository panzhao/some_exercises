main:main.o find_perf_num.o
	gcc -o main main.o find_perf_num.o
main.o:main.c perf_num.h
	gcc -c main.c
find_perf_num.o:find_perf_num.c
	gcc -c find_perf_num.c
