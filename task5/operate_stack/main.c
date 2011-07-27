#include <stdio.h>
#include "operate_stack.h"
#include "debug.h"

extern struct node *top;

int main()
{
    struct node *temp = NULL;
    struct node *top = NULL;
    temp = make_node(1);
    push(temp);
    temp = make_node(2);
    push(temp);
    temp = make_node(3);
    push(temp);
    traverse();
    pop();
    return 0;
}
