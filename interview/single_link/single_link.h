/******************************************************
文件    :     single_link.h
功能    :     对函数的声明和结构体的定义
******************************************************/
struct node 
{
    int num;
    struct node *next;
};

struct node *creat_node(int );
void insert_node(int);
void traverse();
void traverse_r();
void insert_node_r(struct node *);
void reverse_link();
void free_node(struct node *);
void free_all();
