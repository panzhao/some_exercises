/***********************************************
函数    :    print_select_bit
功能    :    找出传入参数的中间位并打印输出
传入参数:    star_bit :   开始位
             end_bit  :   结束位
	         input_num:   传入参数 
传出参数:    无
返回值  :    表示输入输入参数有误
***********************************************/
#include<stdio.h>
int print_select_bit(int star_bit, int end_bit, int input_num)
{
    int find_bit = 0;                       /*定义临时变量用来存放取出位的值*/
    int mask = 0x1;                         /*定义掩码用来取传入参数中每位的值*/   
    int i = 0;

    if (star_bit < 0 || end_bit > 31)       /*对选择位的中间值作出错处理*/
    {
        printf("传入参数有误");
 	    return 0;
    }
    
    input_num = input_num >> star_bit;      /*先将传入参数向右移位star_bit*/

    for (i = star_bit; i <= end_bit; i++)   /*循环取出传入参数中的中间位*/
    {
 	    find_bit = input_num & mask;        /*取出传入参数中的单个位*/
	    printf("%d\n",find_bit);              
	    input_num = input_num >>1;          /*让传入参数向右移１位*/
    }

}
