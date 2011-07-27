/************************************************************
文件    :    quit_num.c
功能    :    实现报数为3的人退出游戏，查找最后一个出队的人
************************************************************/
#include <stdio.h>
#include "quit_num.h"
#include "debug.h"


/***********************************************************
函数    :    init_array
功能    :    将传入的人数存入数组并进行初始化
传入参数:    store_peop[]:存放游戏人数的数组
             peop_num    :参加游戏的总人数
传出参数:    store_peop[]:写入数组的数据
返回值  :    无
***********************************************************/
void init_array(int store_peop[], int peop_num)
{
    int i = 0;
    
    for (i = 0; i < peop_num; i++)    /*循环对参加游戏的总人数初始化*/
    {
        store_peop[i] = 0;
    }
}


/***********************************************************
函数    :    quit_num
功能    :    将参加游戏的人进行出列
传入参数:    store_peop[]:存放游戏人数的数组
             peop_num    :参加游戏的总人数
传出参数:    store_peop[]:写入数组的数据
返回值  :    无
***********************************************************/
void quit_num(int store_peop[], int peop_num)
{
    int quit_total = 0;
    int count = 0;
    int i = 0;
    
    while (quit_total < peop_num)           /*控制循环条件*/
    {
        if (quit_total == peop_num -1)      /*如果游戏中还剩下一个人返回*/
	{
	    return;
	}
	
	if (store_peop[i] == 0)             /*开始计数*/
	{
	    count++;
	}

	if (count == 3)                     /*如果计数为3*/
	{ 
	    quit_total++;                   /*推出的人数加1*/
	    count = 0;                      /*让count从新开始计数*/
	    store_peop[i] = 3;              /*将该成员标记退出*/
	}

	i++;                                /*继续往后数*/
	i = i % peop_num;                   /*防止数组越界*/
    }
}


/**************************************************************
函数    :    print_last
功能    :    打印游戏中推出以后的最后一个人的号码数
传入参数:    store_peop[]:存放游戏人数的数组
             peop_num    :参加游戏的总人数
传出参数:    无
返回值  :    无
**************************************************************/
void print_last(int store_peop[], int peop_num)
{
    int i = 0;

    for (i = 0; i < peop_num; i++)        /*循环判断数组中的元素*/
    {                                     
        if (store_peop[i] != 3)           /*打印最后一个人的号码*/
	{
	    printf("the last person's num is : %d\n", i + 1);
	}
    }
}
