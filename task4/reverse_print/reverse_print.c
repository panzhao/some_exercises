/*********************************************************
文件名  :    reverse_print.c
功能    :    实现字符串的反向打印
函数列表:    *reberse_print
*********************************************************/

#include <stdio.h>

/************************************************************
函数名  :    *reverse_print
功能    :    实现字符串的反向打印
传入参数:    *input_str  :  传入的源字符串
             *out_str    :  改变之后传出的字符串
传出参数:    无
返回值  :    无
*************************************************************/
char *reverse_print(char *input_str,char *out_str, int str_len)
{
    int i = 0;
    char *replace_str = out_str;     /*定义临时变量用来窜放传出的字符串的首地址*/

    for (i = 0; i < str_len - 1; i++) /*让字符串移动到最后一位*/
    {
        input_str++;
    }

    for (i = 0; i < str_len; i++)   /*将字符串循环放到新的字符数组中*/
    {
        *out_str = *input_str;
	out_str++;
	input_str--;
    }
    
    *out_str = '\0';                /*手动给字符串加上字符串结束符*/

    printf("%s\n",replace_str);
}
