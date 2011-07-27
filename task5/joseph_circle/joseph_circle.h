/******************************************************
文件    :    joseph_circle.h
功能    :    对函数和结构体的定义
******************************************************/
#ifndef    _JOSEPH_CIRCLE_
#define    _JOSEPH_CIRCLE_


struct people                /*定义一个结构体*/
{
    int num;
    struct people *next;     /*定义一个结构体指针*/
};

struct people *creat_node(int );    /*创建节点的*/
struct people *find_tail();         /*找到链表的尾部*/
void insert_node(int );             /*插入节点*/
void creat_circle(int );            /*创建循环链表*/
void free_node(struct people *);    /*释放一个节点*/
int print_last(int );               /*打印游戏结束之后的最后一个数据*/
void print_all();                   /*打印所有的节点数据*/
int free_all();                     /*释放所有的节点*/ 

#endif
