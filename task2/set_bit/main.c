#include <stdio.h>
#include  "set_bit.h"

int main()
{
    int input_num = 0x0;
    int middle_bit = 18;
    int bit_num = 1;

    set_bit(middle_bit, bit_num, input_num);
    
    return 0;
}
