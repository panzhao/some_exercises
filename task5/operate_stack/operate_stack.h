/**********************************************************
文件    :    operate_stack.h
功能    :    对函数的声明以及结构体的定义
**********************************************************/
#ifndef    _OPERATE_STACK_H_
#define    _OPERATE_STACK_H_

struct node 
{
    int item;
    struct node *next;
};

void push(struct node *);   /*将节点压入链表中*/
struct node *pop();         /*将链表出栈*/ 
struct node *make_node(int);/*初始化节点*/
void traverse();            /*遍历链表*/

#endif
