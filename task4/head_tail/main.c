#include <stdio.h>
#include "print_head_tail.h"

int main()
{
    char source[] = "abcheadjjjjjighjdtailkkkkkk";
    char *head = "head";
    char *tail = "tail";

    printf("%s\n",print_head_tail(source, head, tail));
}
