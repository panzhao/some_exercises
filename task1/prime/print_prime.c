/*******************************************
函数    ：    find_prime
功能    ：    找出传入参数中哪些是素数并打印输出这些数
参数列表：    star :    参数的起始值
              end  :    参数的结束值
返回值  ：    素数的总个数
作者    ：    赵攀
日期    ：    2011-02-16
*******************************************/
#include<stdio.h>
int find_prime(int);                  /*对调用find_prime进行声明*/
int print_prime(int star, int end)   
{    
    int i = 0;                        /*定义循环体变量*/
    int count = 0;                    /*定义count用来存放素数的总个数*/     
    
    for (i = star; i <= end; i++)     /*通过循环传入参数*/
    { 
        if (1 == find_prime(i))       /*判断传入参数是否为素数*/    
	{
	    printf("%d\n",i);         /*如果传入参数为素数，打印输出*/
	    count++;                  /*如果传入参数为素数使total的数值加*/ 
	}
    }

    return count;
}
