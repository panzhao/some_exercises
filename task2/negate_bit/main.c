#include <stdio.h>
#include "negate_bit.h"

int main()
{
    int input_num = 0xa0a0a0a0;
    int star_bit = 0;
    int end_bit = 31;
    
    negate_bit(star_bit, end_bit, input_num);

    return 0;
}
