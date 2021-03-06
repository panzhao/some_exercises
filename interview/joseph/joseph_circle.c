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
    struct people *node = (struct people *)malloc(sizeof(struct people)); 
    
    if (node == NULL)                 
    {
        printf("can't get space");
	return ;
    }

    node->num = num;                  
    node->next = NULL;              
    
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
    for (tail = head; ; tail = tail->next)   
    {
        if (tail->next == head)              
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
    
    if (num == 1)                 
    {   
        struct people *first_node = creat_node(num);
        head = first_node;
	first_node->next = head;
    }

    else                           
    {    
        struct people *temp_node = NULL;      
	struct people *node = creat_node(num);
        temp_node = find_tail();              
	tail->next = node;                   
	node->next = head;                  
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
    for (i = 1; i <= peop_num; i++)     
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
int print_last(int peop_num,int out_num)
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

	 if (count % out_num == 0)
	 {
	     quit_num++;                     /*如果报数为3则退出的总人数加1*/
	     printf("此时的退出人数是：%d\n",quit_num);
	     printf("此时退出的人的号码是：%d\n",temp_node->num);
	     temp_node->num = 0;
	     count = count % out_num;                     /*让count从新报数*/
	 }

	 if (quit_num == peop_num)
	 {
	      printf("退出完毕") ;
	      return 0;
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
