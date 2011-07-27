#include <stdio.h>
char *change(char *);

int main()
{
    char source[] = "abcdEFG";
    
    printf("转化后的字符串是:%s\n",change(source));
}
