#include <stdio.h>
#include "count_str.h"

int main()
{
    char *str = "hello hello hello";
    char *dest = "ll";

    printf("%d\n",count_str(str, dest));

}
