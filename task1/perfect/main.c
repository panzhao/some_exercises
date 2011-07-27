#include<stdio.h>
#include"perf_num.h"

int main()
{
    int star = 0;                     /*定义开始值*/
    int end  = 1000;                  /*定义结束值*/  
    int i = 0;                        /*定义循环变量*/

    for (i = star; i <= end; i++)     /*通过循环传入需要检测数值*/
    {
        if(1 == find_perf_num(i))     /*判断该数值是否为完数*/
	{
	    printf("%d\n",i);         /*如果传入数值为完数，打印输出*/
	}
    }

    return 0;
}
