/*****************************************************
文件名  :    joseph_circle.c
功能    :    让n个人围成一个圈，报数到3的推出圈子，找出最后的那个人的号码
*****************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "joseph_circle.h"

struct people *head = NULL;
struct people *tail = NULL;

/***********************************************************
函数    :    cteat_node
功能    :    建立一个节点
传入参数:    num  ： 节点中成员号码
传出参数:    无
返回值  :    node : 做好的节点的地址
***********************************************************/
struct people *creat_node(int num)
{
    struct people *node = (struct people *)malloc(sizeof(struct people)); /*为做的节点申请空间*/
    
    if (node == NULL)                 /*判断是否申请空间成功*/
    {
        printf("can't get space");
	return ;
    }

    node->num = num;                  /*给节点中的成员num赋值*/
    node->next = NULL;                /*让节点的指针去指向空*/
    
    return node;
}


/**********************************************************
函数    :    find_tail
功能    :    找到环形链表的尾指针
传入参数:    无
传出参数:    无
返回值  :    tail  :  环形链表尾指针的地址
***********************************************************/
struct people *find_tail()
{   
    for (tail = head; ; tail = tail->next)   /*循环查找环形链表的尾*/
    {
        if (tail->next == head)              /*找到链表的尾部返回它的地址*/
	{
	    return tail;
	}
    }
}


/***********************************************************
函数    :    insert_node
功能    :    将节点插入到环形链表的尾部
传入参数:    num  :  传入的节点的号码
传出参数:    无
返回值  :    无
***********************************************************/
void insert_node(int num)
{   
    
    if (num == 1)                 /*建立第一个节点*/
    {   
        struct people *first_node = creat_node(num);
        head = first_node;
	first_node->next = head;
    }

    else                           /*将第二个以后的节点插入到环形链表中*/
    {    
        struct people *temp_node = NULL;      /*定义临时变量用来存放链表尾部的地址*/
	struct people *node = creat_node(num);/*创建节点*/
        temp_node = find_tail();              /*找到链表尾部*/
	tail->next = node;                    /*将链表尾指针指向节点*/
	node->next = head;                    /*将节点指向头*/
    }
}


/**********************************************************
函数    :    creat_circle
功能    :    创建循环链表
传入参数:    peop_num  :   插入链表的总人数
传出参数:    无
返回值  :    无
**********************************************************/
void creat_circle(int peop_num)
{
    int i = 0;
    for (i = 1; i <= peop_num; i++)     /*循环制作链表*/
    {
        insert_node(i);
    }
}


/************************************************************
函数    :    free_node
功能    :    释放节点占用的空间
传入参数:    需要被释放的节点
传出参数:    无
返回值  :    无
************************************************************/
void free_node(struct people *node)
{
    free(node);
}


/***********************************************************
函数    :    print_last
功能    :    打印游戏结束时候的最后一个人
************************************************************/
int print_last(int peop_num)
{
    struct people *temp_node = NULL;
    int  quit_num = 0;       /*退出的总数*/
    int count = 0;           /*用来报数*/
    
    for (temp_node = head; ;temp_node = temp_node->next)
    {
         
	 if (temp_node->num == 0)            /*检测如果是退出的人则跳过*/
	 {
	     continue;
	 }
         
	 
	 count++;

	 if (3 == count)
	 {
	     quit_num++;                     /*如果报数为3则退出的总人数加1*/
	     printf("此时的退出人数是：%d\n",quit_num);
	     printf("此时退出的人的号码是：%d\n",temp_node->num);
	     temp_node->num = 0;             /*把报数到3的人标记为0*/
	     count = 0;                      /*让count从新报数*/
	 }

	 if (quit_num == peop_num - 1)
	 {
	     
	     for (temp_node = head; ;temp_node = temp_node->next)
	     {
	         if (temp_node->num != 0)
		 {
		     printf("最后一个人的号码是：%d\n",temp_node->num);
	             return 1;
		 }    
             }		 
	 }
    }
}


/***************************************************************
函数    :    print_all
功能    :    打印环形链表中的所有值
传入参数:    无
传出参数:    无
返回值  :    无
****************************************************************/
void print_all()
{
    struct people *temp_node = head;

    printf("num = %d,",temp_node->num);

    for (temp_node = temp_node->next; temp_node != head; temp_node = temp_node->next) 
    {
        printf("num = %d,",temp_node->num);
    }
    
    printf("\n");
}


/****************************************************************
函数    :    free_all
功能    :    将链表中所有节点释放
传入参数:    无
传出参数:    无
返回值  :    1:说明释放完毕
****************************************************************/
int free_all()
{
    
   struct people *temp_node = head;

   free_node(temp_node);    

   for (temp_node = temp_node->next; temp_node != head; temp_node = temp_node->next)
   {
       free_node(temp_node);
   }

   return 1;
}
