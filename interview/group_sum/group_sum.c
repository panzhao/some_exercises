/*************************************************************
文件名  :    group_sum.c
功能    :    求1，2，5三个不同组合数为100的的组合数
函数列表:    group_sum():求1，2，5，不同组合数为100的组合数
*************************************************************/

#include <stdio.h>


/*************************************************************
函数    :    group_sum()
功能    :    求1，2，5三个不同组合数为100的组合数
传入参数:    无
传出参数：   无
返回值  :    total:组合数的总数
*************************************************************/
int group_sum()
{
    int total = 0;       /*用来存放组合的总个数*/
    int num_1 = 1;       /*用来存放组合中1的总数*/
    int num_2 = 1;       /*用来存放组合中2的总个数*/
    int num_5 = 1;       /*用来存放组合中5的总个数*/

    for (num_1 = 0; num_1 <= 100; num_1++)           /*循环判断1的个数*/
    {
        for (num_2 = 0; num_2 <= 50; num_2++)        /*循环判断2的个数*/
	{ 
	    for (num_5 = 0; num_5 <= 20; num_5++)    /*循环判断5的个数*/
	    {
	        if ((num_1 + 2 * num_2 + 5 * num_5) == 100)    /*如果上面的组合判断为100让总个数加1*/
		{
		    total++;
		}
	    }
	}
    }

    return total;
}