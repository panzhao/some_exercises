/************************************************************
文件   :    operate_stack.c
功能   :    实现栈出栈和入栈的操作
************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "operate_stack.h"
#include "debug.h"

struct node * top = NULL;

/***********************************************************
函数    :    make_node()
功能    :    创建一个节点
传入参数:    num:对节点中item值
传出参数:    无
返回值  :    无
***********************************************************/
struct node *make_node(int num)
{
    struct node *temp_node = (struct node *)malloc(sizeof(struct node));

    if (temp_node == NULL)
    {
        printf("申请动态内存失败");
	return;
    }

    temp_node->item = num;
    temp_node->next = NULL;
    debug_msg("建立的节点%d\n",temp_node->item);
    return temp_node;
}

/************************************************************
函数    :    push()
功能    :    将传入的节点压入到栈中

************************************************************/
void push(struct node *node)
{
    node->next = top;
    top = node;
}

/**************************************************************
函数    :    pop()
功能    :    将节点出栈
**************************************************************/
struct node * pop()
{  
  
    struct node *temp_top = NULL;  
    temp_top = top;
    top = top->next;
    free(temp_top);
    return top;
}


/****************************************************************
函数    :    traverse()
功能    :    遍历链表中的值
****************************************************************/
void traverse()
{
    struct node *temp = NULL;

    for (temp = top; temp != NULL; temp = temp->next)
    {
        printf("%d\n",temp->item);
    }
}


/******************************************************************
函数    :    pop_all()
功能    :    将链表中所有节点进行出栈
*******************************************************************/
void pop_all()
{   
    struct node *temp_node = NULL;

    for (temp_node = top; temp_node != NULL; temp_node = temp_node->next)
    {
        pop(temp_node);
    }
}

