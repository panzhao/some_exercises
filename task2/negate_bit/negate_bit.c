/************************************************************
文件名  :    negate_bit
功能    :    将输入的参数选择中间位然后取反
函数列表:    negate_bit : 将传入参数的某些位取反之后打印输出；
*************************************************************/
#include<stdio.h>

/************************************************************
函数    :    negate_bit
功能    :    将传入的参数的中间某些位按位取反并打印输出
传入参数:    star_bit : 传入参数的起始位
             end_bit  : 传入参数的截止位
	         input_num: 传入参数
传出参数:    无	     
************************************************************/
int  negate_bit(int star_bit, int end_bit, int input_num)
{
    int temp_bit = 0;                       /*存放取出参数单个位的临时变量*/
    int mask = 0x1;                         /*定义掩码用来取参数中的单个位*/
    int i = 0;

    if ((star_bit < 0 ) || (end_bit > 31))  /*检测传入参数是否有误*/
    {
        printf("输入参数有误");
	    return 0;
    }
    
    input_num = input_num >> star_bit;       /*先将传入参数向右移star_bit位*/

    for (i = star_bit; i <= end_bit; i++ )   /*循环取出参数中的单个位*/
    {
        temp_bit = (~input_num) & mask;      /*取出参数中的某一位并存入temp_bit*/
	    printf("%d",temp_bit);
	    input_num = input_num >> 1;          /*将传入参数右移一位*/
    }

    printf("\n");
}
