#include <stdio.h>
#include "insert_str.h"

int main()
{
    char source[100] = "abcdefghijkl";
    char *dest = "kkeidcnf";
    insert_str(source,dest);
    return 0;
}
