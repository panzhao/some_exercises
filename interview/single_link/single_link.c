/**********************************************************
文件    :    single_link.c
功能    :    实现单链表的反转
函数列表:    creat_node(int):建立一个节点
             insert_node(): 将节点插入到链表中
	     traverse():对链表进行遍历
**********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "single_link.h"

struct node *head = NULL;


/************************************************************
函数    :    creat_node()
功能    :    建立一个节点
传入参数:    num:链表中的成员值
传出参数:    无
返回值  :    pnode:返回建立好的节点的地址
************************************************************/
struct node *creat_node(int num)
{
    struct node * pnode = (struct node *)malloc(sizeof(struct node)); /*为节点申请空间*/
    
    if (pnode == NULL)                    /*判断是否申请空间成功*/
    {
       printf("申请空间失败");
       return;
    }

    pnode->num = num;        /*给节点成员赋值*/
    pnode->next = NULL;      

    return pnode;
}


/*************************************************************
函数    :    insert_node
功能    :    将节点插入到链表
传入参数:    num:插入节点的的成员值
传出参数:    无
返回值  :    无
*************************************************************/
void insert_node(int num)
{
    struct node *temp_node = creat_node(num);   /*建立一个节点*/
     
    temp_node->next = head;                     /*建建立的节点插入到链表的头部*/
    head = temp_node;
}


/***************************************************************
函数    :    trverse
功能    :    遍历链表
传入参数:    无
传出参数:    无
***************************************************************/
void traverse()
{   
    struct node *temp_node = NULL;

    for (temp_node = head; temp_node != NULL; temp_node = temp_node->next)  /*循环打印链表的节点值*/
    {
        printf("%d,",temp_node->num);
    }
}


struct node *head_r = NULL;
/***************************************************************
函数    :    insert_node_r
功能    :    插入节点
传入参数:    *temp_node:需要插入到链表中的值
传出参数:    无
返回值  :    无
***************************************************************/
void insert_node_r(struct node * temp_node)
{
    temp_node->next = head_r;
    head_r = temp_node;
}


/****************************************************************
函数    :    reverse_link
功能    :    将链表倒置
传入参数:    无
传出参数:    无
返回值  :    无
****************************************************************/
void reverse_link()
{   
    struct node *temp_node = head;
    struct node *p = NULL;

    for (p = temp_node->next; p != NULL; p = p->next)   /*将原链表中的值循环插入到新链表中实现倒置*/
    {
        insert_node_r(temp_node);
	temp_node = p;
    }

    insert_node_r(temp_node);           /*将最后一个节点插入到链表中*/
}


/*****************************************************************
函数    :    traverse_r
功能    :    遍历反转的链表
传入参数:    无
传出参数:    无
返回值  :    无
*****************************************************************/
void traverse_r()
{
     struct node * temp_node = NULL;
     printf("反转后的链表为：");

     for (temp_node = head_r; temp_node != NULL; temp_node = temp_node->next)/*循环打印反转后的链表*/
     {
         printf("%d ",temp_node->num);
     }

     printf("\n");
}


/***************************************************************
函数    :    free_node()
功能    :    释放节点
传入参数:    struct node *node : 需要释放的节点
传出参数:    无
返回值  :    无
***************************************************************/
void free_node(struct node *node)
{
    free(node); 
}


/**************************************************************
函数    :    free_all()
功能    :    释放所有的节点
传入参数:    无
传出参数:    无
返回值  :    无
**************************************************************/
void free_all()
{   
    struct node *temp_node = NULL;

    for (temp_node = head_r; temp_node != NULL; temp_node = temp_node->next)
    {
        free_node(temp_node);
    }

    printf("释放完毕\n");
}
