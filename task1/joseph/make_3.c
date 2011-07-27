/************************************************
函数    ：    make_3
功能    ：    找出报数为3的人数并排除
传入参数：    count    :计算数组的下标
              *array   :用来存放总人数的个数
	      peop_num :进行检测的总人数
返回值  ：    返回数组的下标	      
日期    ：    2011-02-16
作者    ：    赵攀
*************************************************/
#include<stdio.h>
int make_3(int count, int *array, int peop_num)
{
    int i = 0;
    
    for (i = 1; i < 4; i++ )           /*进行3次循环找出报数为3的数组成员*/
    {
	if (count == peop_num)         /*当数组数到最后一个时从新开始数*/
	{
	    count = 0;
	}

	while (array[count] == 3)       /*如果数组中某成员报数为3，跳过该成员*/
	{
	    count++;
            
	    if (count == peop_num)      /*当数组数到最后一个时从新开始数*/
	    {
	        count = 0;
	    }

	}
       
        array[count++] = i;             /*为当前数组元素赋值，每次找出一个为3的元素*/
    }
    return count;
}
