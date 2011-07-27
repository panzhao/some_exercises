#include <stdio.h>
#include <string.h>
#include "reverse_print.h"

int main()
{
    char *input_str = "hello world";
    char out_str[100];

    int str_len = strlen(input_str);
    reverse_print(input_str, out_str, str_len);

    return 0;
}   
