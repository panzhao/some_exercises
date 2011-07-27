/********************************************************
文件    :    sort_num_str.c
功能    :    将一个字符数组中的数字字符串按升序排序
函数列表:    get_num_str(char, char (*temp_str[])) : 取出字符数组中的每一个数字字符串
             swap(int *, int ): 冒泡法排序
	     sort_num_str(char *, char (*temp_str)[], char *):实现字符串中数字字符串的升序排列
********************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "sort_num_str.h"


/*********************************************************
函数    :    get_num_str()
功能    :    取出字符串中的每一个数字字符串
传入参数:    *str  :  源字符串
             (*temp_str)[100]:存放字符串中的数字字符串
传入参数:    无
返回值  :    i : 字符数组里面数字字符串的总个数 
*********************************************************/
int get_num_str(char *str,char (*temp_str)[100])
{
    int i = 0;
    int j = 0;

    while (*str != '\0')             /*循环取出字符串中的字符并存放在二维数组中*/
    {
	if (*str == ' ')             /*遇见空格说明有一个数字字符串*/
	{
	    *(*(temp_str + i) + j) = ' ';   /*碰见空格先给字符串加上空格*/
	    j++;
	    *(*(temp_str + i) + j) = '\0';  /*给数字字符串末端手动加上字符串结束符号*/
	    i++;                            /*碰见空格开始数下一个数字字符串*/
	    j = 0;
	}

        *(*(temp_str + i) + j) = *str;      /*将字符串中的字符存入二维数组*/
	str++;
	j++;
    }

    *(*(temp_str + i) + j) = '\0';
    
    printf("取出来的数字字符串为：");
    
    for (j = 0; j < i + 1; j++)
    {
        printf("%s",temp_str[j]);
    }
    
    printf("\n");

    return i + 1;
}

/******************************************************
函数    :    swap()
功能    :    实现一组数据的排序
传入参数:    *temp_str:传入的数组
             str_num  :数组中的元素的个数
传出参数:    无	     
返回值  :    无
******************************************************/
void swap(int *temp_str, int str_num)
{   
    int temp = 0;
    int i = 0;
    int j = 0;

    for (i = 0; i < str_num; i++)           /*使用冒泡法对数组中的元素进行排序*/
    {
        for (j = i + 1; j < str_num; j++)
	{
	    if (temp_str[i] > temp_str[j])
	    {
	        temp = temp_str[i];
		temp_str[i] = temp_str[j];
		temp_str[j] = temp;
	    }
	}
    }
}


/********************************************************************
函数    :    sort_num_str
功能    :    对字符数组中的数字进行升序排列并以字符串形式打印

********************************************************************/
int sort_num_str(char *source, char (*temp_str)[100], char *dest)
{   
    char temp_array[100];
    char *temp_dest = dest;    /*将dest的首地址保存下来*/
    int array[100];            /*定义一个数组用来存放数字字符串*/
    int temp_num = get_num_str(source, temp_str); /*记录下数字字符的总数*/

    int  i = 0;

    for (i = 0; i < temp_num; i++)     /*将数字字符转换成数字*/
    {
        array[i] = atoi(temp_str[i]);
    }
    
    printf("排序后的数为:");
    swap(array, temp_num);             /*对取出来的数字字符串进行排序*/

    for (i = 0; i < temp_num; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
  
    for (i = 0; i < temp_num; i++)     /*将排序后的数字字符串转换成字符串*/
    {   
        int j = 0;
        if (array[i] < 0)              /*对负数的处理*/
	{
	    array[i] = -array[i];   
	    *dest++ = '-';

	    while (array[i] > 0)                      /*循环取出数字字符的每一位*/
	    {
	        temp_array[j++] = array[i] % 10 + '0';
		array[i] = array[i] / 10;
	    }

	    j = j - 1;

	    while (j >= 0)                             /*将数字字符中的位数调换回去*/
	    {
	        *dest++ = temp_array[j--];
	    }

            *dest++ = ' ';
            continue;
	}

        while (array[i] > 0)
	{
	    temp_array[j++] = array[i] % 10 + '0';
	    array[i] = array[i] / 10;
	}

	j = j - 1;

        while (j >= 0)
	{
	    *dest++ = temp_array[j--];
	}

	*dest++ = ' ';
    }

    *dest = '\0';

    printf("改变后的字符串为：%s\n",temp_dest);

}
