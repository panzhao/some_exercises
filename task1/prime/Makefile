main:main.o print_prime.o find_prime.o
	gcc -o main main.o print_prime.o find_prime.o
print_prime.o:print_prime.c find_prime.c
	gcc -c print_prime.c 
main.o:main.c prime.h
	gcc -c main.c 
find_prime.o:find_prime.c
	gcc -c find_prime.c
