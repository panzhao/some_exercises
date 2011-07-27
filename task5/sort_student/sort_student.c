/***********************************************************
文件    :    student.c
功能    :    对学生链表进行排序
************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "sort_student.h"

struct student *boy_head = NULL;      /*定义男生链表头指针*/
struct student *girl_head = NULL;     /*定义女生链表头指针*/
 
/****************************************************************
函数    :    init_student()
功能    :    对学生信息的初始化
传出参数:    *stu_name : 姓名
             age : 年龄
	     sex : 性别
传出参数:    无
返回值  :    无
****************************************************************/
struct student * init_student(char *stu_name, int age, int sex)
{
    struct student *temp_stu = (struct student *)malloc(sizeof(struct student)); /*开辟节点空间*/
    int i = 0;

    if (temp_stu == NULL)          /*判断是否申请空间成功*/
    {
        printf("申请空间失败");
	return;
    }

    temp_stu->sex = sex;           /*初始化性别*/
    temp_stu->age = age;           /*初始化年龄*/
    while (*stu_name != '\0')      /*初始化姓名*/
    {
        temp_stu->name[i++] = *(stu_name++);
    }
    temp_stu->next = NULL;

    return temp_stu;
}


/*********************************************************************
函数    :    insert_node()
功能    :    将学生插入到链表中
传入参数:    *temp_stu:需要插入链表的节点
             *temp_head:需要插入的链表的头节点
传出参数:    无
返回值  :    无
*********************************************************************/
void insert_link( struct student *temp_stu)
{
    if (temp_stu->sex == MALE)           /*如果是男生放入男生链表*/
    {
        temp_stu->next = boy_head;
        boy_head = temp_stu;
    }
    else                                  /*如果是女生放入女生链表*/
    {
        temp_stu->next = girl_head;
	girl_head = temp_stu;
    }
    printf("姓名：%s 年龄：%d  性别：%d\n",temp_stu->name,temp_stu->age,temp_stu->sex);
    
}


/**********************************************************************
函数    :    creat_boy_link()
功能    :    创建男生的链表
传入参数:    无
传出参数:    无
返回值  :    无
**********************************************************************/
void creat_link()
{
    struct student *stu1 = init_student("liming", 18, MALE);
    insert_link(stu1);
    struct student *stu2 = init_student("wangning", 19, MALE);
    insert_link(stu2);
    struct student *stu3 = init_student("zhaoming", 17, MALE);
    insert_link(stu3);
    struct student *stu4 = init_student("zhangming", 24, MALE);
    insert_link(stu4);
    struct student *stu5 = init_student("luoliming", 16, MALE);
    insert_link(stu5);
    struct student *stu6 = init_student("lili", 20, FEMALE);
    insert_link(stu6);
    struct student *stu7 = init_student("wangli", 21, FEMALE);
    insert_link(stu7);
    struct student *stu8 = init_student("dingli", 22, FEMALE);
    insert_link(stu8);
    struct student *stu9 = init_student("zhaoli", 23, FEMALE);
    insert_link(stu9);
    struct student *stu10 = init_student("zhouli", 15, FEMALE);
    insert_link(stu10);
}


/***********************************************************************
函数    :    traverse_link()
功能    :    对链表遍历
传入参数:    *temp_node:需要遍历的链表的头指针
传出参数:    无
返回值  :    无
************************************************************************/
void traverse_link(struct student *temp_node)
{    
     struct student *temp = temp_node;
     for (temp; temp != NULL; temp = temp->next)
     {
         printf("姓名：%s 年龄：%d  性别：%d\n",temp->name,temp->age,temp->sex);
     }
     printf("遍历完成\n");
}


/************************************************************************
函数    :    free_all()
功能    :    对节点进行释放
传入参数:    需要释放的节点
传出参数:    无
返回值  :    无
************************************************************************/
void free_all(struct student *node)
{
    struct student *temp_node = NULL;

    for (temp_node = node; temp_node != NULL; temp_node = temp_node->next)
    {
        free(temp_node);
    }

    printf("释放完毕\n");
}


/************************************************************************
函数    :     combine_link()
功能    :     将男生和女生的链表合成一个链表   
************************************************************************/
void combine_link()
{
    struct student *temp_head = boy_head;

    for (temp_head; temp_head->next != NULL; temp_head = temp_head->next)/*循环移动指针到尾部*/
    {
         ;
    }
    
    temp_head->next = girl_head;        /*将男孩指针插入到女生头指针*/
}


/****************************************************************
函数    :    sort_link()
功能    :    实现链表的排序由小到大,冒泡法排序
传入参数:    无
传出参数:    无
返回值  :    无
****************************************************************/
void sort_link()
{
    struct student *temp_head = (struct student *)malloc(sizeof(struct student));/*开辟一个节点放在链表头*/
    struct student *temp_head1 = NULL;        /*用来循环比较节点的大小*/
    struct student *temp_mid = NULL;          /*用来存放节点地址的临时变量*/
    struct student *temp = NULL;              /*用来记录已经比较结束的节点地址以控制循环次数*/
    struct student *temp_tail = NULL;         /*控制循环的次数*/
    
    temp_head->next = boy_head;
    boy_head = temp_head;

    for (temp_tail = NULL; temp_tail != boy_head; temp_tail = temp)   /*循环排序*/
    {
        for (temp = temp_head1 = boy_head; temp_head1->next->next != temp_tail; 
	     temp_head1 = temp_head1->next)
	{
	    if (temp_head1->next->age > temp_head1->next->next->age)
	    {   
	        temp_mid = temp_head1->next->next;
		temp_head1->next->next = temp_mid->next;
		temp_mid->next = temp_head1->next;
                temp_head1->next = temp_mid;
		temp = temp_head1->next->next;
	    }
	}
    }
    
    boy_head = boy_head->next;
    free(temp_head);
}
