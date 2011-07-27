#include <stdio.h>
#include "strstr.h"

int main()
{
    char *source = "abABCdefglABCnnnnnnnnnnnn";
    char *dest = "ABC";

    printf("字串的个数：%d\n",count_ABC(source, dest));
  
    return 0;
}
