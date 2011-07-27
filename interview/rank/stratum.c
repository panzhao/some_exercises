/****************************************************
文件    :     stratum.c
功能    :     求一个40位n!的值
函数列表:     stratum(int):实现一个40位n!的值
****************************************************/
#include <stdio.h>


/*******************************************************
函数    :    stratum()
功能    :    求一个40位的n!的值
传入参数:    num:需要求的阶乘的位数
传出参数:    无
返回值  :    1:特殊情况1和0的阶乘
*******************************************************/
int stratum(int num)
{
    int i = 0;                  
    int j = 0;
    int temp_num = 0;         /*用来存放临时的值*/
    int temp_num1 = 0;        /*用来存放进位的值*/
    int place_num = 1;        /*阶层的位数*/
    int store_num[1000];      /*用来存放阶层的位数*/
    store_num[0] = 1;         

    if ((num == 0) || (num == 1))   /*对特殊情况0和1处理*/
    {
         printf("0和1的阶层为：1");
         return 1;
    }

    for (i = 2; i <= num; i++)       /*循环求n的阶层*/
    {
        for (j = 0; j < place_num; j++)    /*求n和n-1的乘积*/
	{
	    temp_num = store_num[j] * i + temp_num1;   /*让每一位和下一个n相乘*/
	    store_num[j] = temp_num % 10;              /*取出低位*/
	    temp_num1 = temp_num / 10;                 /*取出高位*/
	}

	while (temp_num1 > 0)                          /*判断高位是否有进位，如果有进位存放下一位*/
	{
            store_num[place_num++] = temp_num1 % 10;
	    printf("进位：%d\n",store_num[place_num - 1]);
	    temp_num1 = temp_num1 / 10;
	}
    }

    printf("num的阶层是：");                    

    for (i = place_num - 1; i >= 0; i--)       /*循环打印求出的阶层*/
    {
        printf("%d",store_num[i]);
    }

    printf("\n");

    return 0;
}

 
