#include <stdio.h>
#include "student.h"

extern struct student *boy_head;
extern struct student *girl_head;

int main()
{   
    printf("创建好的链表为：\n");
    creat_link();
    printf("男生链表:\n");
    traverse_link(boy_head);
    printf("女生链表：\n");
    traverse_link(girl_head);

    free_all(boy_head);
    free_all(girl_head);
}
