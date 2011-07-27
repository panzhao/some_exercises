#include <stdio.h>
#include <stdlib.h>
#include "quit_num.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("input error\n");
	return;
    }
    
    int store_peop[atoi(argv[1])];
    init_array(store_peop,atoi(argv[1]));
    quit_num(store_peop,atoi(argv[1]));
    print_last(store_peop,atoi(argv[1]));
}
