#include <stdio.h>
#include "sort_student.h"

extern struct student *boy_head;
extern struct student *girl_head;

int main()
{   
    printf("创建的学生链表为：\n");
    creat_link();
    printf("男生链表:\n");
    traverse_link(boy_head);
    printf("女生链表：\n");
    traverse_link(girl_head);
    printf("结合后的链表：\n");
    combine_link();
    traverse_link(boy_head);
    printf("排序好的链表为：\n");
    sort_link();
    traverse_link(boy_head);
    free_all(boy_head);
}
