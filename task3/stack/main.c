#include <stdio.h>
#include "stack.h"

int main()
{
    push('1');
    push('3');
    push('b');

    while (sp > 0)       /*进行出栈的操作*/
    {
        putchar(pop());
	putchar('\n');
    }
    
}
