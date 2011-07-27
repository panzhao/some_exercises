#include <stdio.h>
#include "sort_num_str.h"

int main()
{
    char *source = "123 55 -897 33 78 897 -123";
    char temp_str[100][100];
    char dest[100];
    
    sort_num_str(source, temp_str, dest);

    return 0;
}
