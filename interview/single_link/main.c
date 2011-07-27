#include <stdio.h>
#include "single_link.h"

int main()
{   
    printf("现在的节点为:");
    insert_node(100);
    insert_node(24);
    insert_node(23);
    insert_node(26);
    insert_node(22);
    insert_node(21);
    insert_node(28);
    insert_node(27);

    traverse();
    printf("\n");

    reverse_link();
    traverse_r();
    free_all();

    return 0;
}
