/*********************************************************
文件    :    sutdent.h
功能    :    对函数的声明以及对结构体的定义
*********************************************************/
#ifndef    _STUDENT_H_
#define    _STUDENT_H_

#define MALE   0
#define FEMALE 1

struct student
{
    char name[20];
    int age;
    int sex;
    struct student *next;
    struct student *pre;
};

struct student *init_student(char *, int , int );/*初始化学生节点*/
void creat_link();    /*创建学生链表*/
void traverse_link(struct student *);  /*遍历链表*/
void insert_link(struct student *);    /*将学生放入链表*/
void free_all(struct student *);       /*释放所有学生节点*/
void combine_link();                   /*将两个链表合并*/  
void sort_link();                      /*对链表中的学生按年龄排序*/
void intsert_new(struct student *);    /*将节点插入到新链表中*/
void reverse_sort();                   /*将链表倒置*/
void change_double();                  /*将单链表变成双链表*/
void search_student(int );

#endif
