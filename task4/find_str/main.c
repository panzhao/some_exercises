#include <stdio.h>
#include "count_str.h"

int main()
{
    char *str = "hello hello hell hell";
    char *dest = "llo";

    printf("%d\n",count_str(str, dest));

}
