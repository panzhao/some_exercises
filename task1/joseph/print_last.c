/*******************************************
函数名  ：       init_array 
功能    ：       对传入的数组进行初始化
输入参数：       *array   :    定义一个数组用来存放需要判断的总人数
		 peop_num :    进行判断的总人数
返回值  ：       无
日期    ：       2011-02-16
作者    ：       赵攀
*******************************************/
#include<stdio.h>
int print_last(int *array, int peop_num)
{   
    int count = 0;
    int i = 0;
    
    for (i = 1; i < peop_num; i++)      
    {
       count = make_3(count, array, peop_num); /*调用函数把数组中的peop_num - 1个元素置为3*/
    }

    for (i = 0; i < peop_num; i++)             /*循环检测传入的人数*/
    {
        if (array[i] != 3)                     /*检测该元素是否为3*/
	{
	    printf("%d\n",i + 1);              /*如果不是为3，打印输出*/
	}
    }
}
