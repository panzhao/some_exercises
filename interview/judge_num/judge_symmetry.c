/******************************************************
文件    :    judge_symmetry.c
功能    :    判断传入的参数是否为回文数
函数列表:    get_num(int, int *):取出传入参数的每一位
             judge_num(int ,int *):判断传入参数是否为回文数
*******************************************************/
#include <stdio.h>

/*****************************************************
函数    :    get_num
功能    :    取出传出参数中的每一位并存入数组
传入参数:    num :传入的参数
             *store_num:传入的数组用来存放参数的每一位
传出参数:    无
返回值  :    i:传入参数的位的个数
*****************************************************/
int get_num(int num,int *store_num)
{
    int i = 0;
    int j = 0;
    int input_num = num;

    while (input_num > 0)        /*循环取出参数中的每一位*/
    {
        store_num[i] = input_num % 10;
	i++;
	input_num = input_num / 10;
    }
    
    printf("取出来的数为：");

    for (j = 0; j < i; j++)
    {
        printf("%d,",store_num[j]);
    }
    
    return i;
}

int judge_num(int num, int *store_num)
{
    int  temp_i = get_num(num, store_num);    
    int i = 0;
    int temp_star = 0;
    int temp_end = temp_i - 1;

    for (i = 0; i < temp_i / 2; i++)          /*循环判断传入参数的对称位是否相等*/
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
    
    printf("此数值为回文数");
    return num;
}
