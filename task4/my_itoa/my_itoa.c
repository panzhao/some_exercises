/******************************************************
文件名  :    my_itoa.c
功能    :    实现整数转换成任意进制的字符串
函数列表:    my_itoa
******************************************************/
#include <stdio.h>

int my_itoa(int input_num, int change_num)
{
    char store_num[100];              /*用来存放转换成的字符位*/
    int i = 0;                        /*循环变量*/
    int j = 0;
    int temp_num = input_num;         /*临时变量用来存放传入的参数*/ 

    if (input_num < 0)
    {
        input_num = -input_num;       /*如果是负数先转换成整数*/
    }

    while(input_num > 0)              /*循环检测传入参数直到取出传入参数的每一位*/
    {   
        if (input_num % change_num >= 10)   /*如果进制数大于10转换成字母输出*/
	{
	    store_num[i] = input_num % change_num + '0' + 39;
	}
	else
	{
	    store_num[i] = input_num % change_num + '0';  /*如果进制数小于10正常打印输出*/
	}

	input_num = input_num / change_num;

	i++;
    }

    if (temp_num < 0)
    {
        store_num[i] = '-';
    }
    else
    {
        store_num[i] = '+';
    }

    for (j = i; j >= 0; j--)      /*循环打印字符*/
    {
        printf("%c",store_num[j]);
    }

    printf("\n");
}
