/*******************************************************
文件    :    count_symmetry
功能    :    实现查找传入参数范围内的回文数的个数
函数列表:    find_summetry(int) : 判断传入数据是否为回文数
             count_summetry(int , int): 计算传入参数范围内的回文数的总数
*******************************************************/
#include <stdio.h>


/******************************************************
函数    :    find_summetry
功能    :    判断传入的参数是否为回文数
传入参数:    num : 需要被判断的参数
传出参数:    无
返回值  :    0:不是回文数
             1:是回文数
******************************************************/
int find_summetry(int num)
{
    int store_num[100];         /*定义数组用来存放传入参数的每一位*/
    int temp_num = num;         /*用来存放传入的参数*/
    int count = 0;              /*用来计算传入参数的位数*/
    int j = 0;                  
    int temp_star = 0;          /*代替数组起始位*/
    int temp_end = 0;           /*代替数组末位*/

    while (temp_num > 0)        /*循环取出传入参数中的每一位*/
    {
        store_num[count] = temp_num % 10;
	count++;
	temp_num = temp_num / 10;
    }
    
    temp_end = count -1;

    for (j = 0; j < count / 2; j++)      /*循环比较参数中的对称位*/
    {
        if (store_num[temp_star] == store_num[temp_end])  
	{
	    temp_star++;
	    temp_end--;
	    continue;             
	}

	else
	{
	    return 0;
	}
     }
     return 1;
}



/*********************************************************
函数    :    count_summetry
功能    :    计算传入参数中的回文数
传入参数:    star : 传入参数的起始位
             end  : 传入参数的末位
传出参数:    无
返回值  :    1:检测函数是否执行完毕
*********************************************************/
int count_summetry(int star, int end)
{   
    int num = 0;          
    printf("下列为回文数：\n");
    
    for (num = star; num <= end; num++)       /*循环检测传入参数中是否为回文数*/
    { 
        if ((find_summetry(num) == 1) && (find_summetry(num*num) == 1) 
	    && (find_summetry(num*num*num) == 1))
	{
	    printf("%d,", num);
	}
    }

    printf("\n");

    return 1;
}
