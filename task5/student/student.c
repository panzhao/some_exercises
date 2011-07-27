/***********************************************************
文件    :    student.c
功能    :    创建两个学生链表，一个存放男生一个存放女生
************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "student.h"

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
    /*开辟节点空间*/ 
    struct student *temp_stu = (struct student *)malloc(sizeof(struct student));
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
    struct student *stu3 = init_student("zhaoming", 18, MALE);
    insert_link(stu3);
    struct student *stu4 = init_student("zhangliming", 18, MALE);
    insert_link(stu4);
    struct student *stu5 = init_student("luoliming", 18, MALE);
    insert_link(stu5);
    struct student *stu6 = init_student("lili", 18, FEMALE);
    insert_link(stu6);
    struct student *stu7 = init_student("wangli", 18, FEMALE);
    insert_link(stu7);
    struct student *stu8 = init_student("dingli", 18, FEMALE);
    insert_link(stu8);
    struct student *stu9 = init_student("zhaoli", 18, FEMALE);
    insert_link(stu9);
    struct student *stu10 = init_student("zhouli", 18, FEMALE);
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
