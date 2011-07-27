#include<stdio.h>
#include "count_9.h"

int main(int argc, char *argv[])                    /*使用命令行参数传入参数范围*/
{
    int total = 0;                                  /*定义total用来存放所求数值中9的总数*/
    
    if (argc > 2)
    {
        total = count_9(atoi(argv[1]), atoi(argv[2]));  /*通过函数count_9来求传入数值中的9的总数*/
        printf("%d\n",total);                /*打印输出传入数值中9的总数*/ 
    }	
    else
    {
        printf("命令行参数输入有误");
    }
    
    return 0;
}
