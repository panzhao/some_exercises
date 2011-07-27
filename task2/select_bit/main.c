#include <stdio.h>
#include "print_select_bit.h"

int main()
{
    int input_num = 0xf0f0f0f0;
    int bit_star = 2;
    int bit_end = 5;

    print_select_bit(bit_star, bit_end, input_num);
}

