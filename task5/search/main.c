#include <stdio.h>
#include "search_student.h"

extern struct student *boy_head;
extern struct student *girl_head;
extern struct student *new_head;

int main()
{   
    printf("创建链表：\n");
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
    printf("反转后的链表为：\n");
    reverse_sort();
    traverse_link(new_head);
    change_double();   
    search_student(15);
    free_all(new_head);

    return 0;
}
