main:main.o sort_num_str.o
	gcc -o  main main.o sort_num_str.o
main.o:main.c sort_num_str.h
	gcc -c  main.c
sort_num_str.o:sort_num_str.c
	gcc -c sort_num_str.c
clean:
	rm -f *.o
