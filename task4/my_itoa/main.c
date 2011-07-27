#include <stdio.h>
#include "my_itoa.h"

int main()
{
    int input_num = +12345;
    int change_num = 16;     /*需要被转换的进制数*/

    my_itoa(input_num, change_num);
}
