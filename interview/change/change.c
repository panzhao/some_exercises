/********************************************************
文件    :    change.c
功能    :    实现将字符串中的小写字母转换成大写字母
函数列表:    change(char *) : 实现将字符串中的小写字母转换成大写字母
********************************************************/
#include <stdio.h>

/********************************************************
函数    :    change(char *)
功能    :    将字符串中的小写字母转换成大写字母
传入参数:    *source  :  需要被转换的字符串
传出参数:    无
返回值  :    转换之后的字符串
********************************************************/
char *change(char *source)
{
   char *temp_str = source;     /*定义临时指针变量用来存放字符串的首地址*/

   while (*source != '\0')      /*循环检测字符串中的字符*/  
    {
        if (*source >= 97 && *source <= 122)    /*如果字符串中的字符是小写转换成大写*/
	{
	    *source = *source - 32;
	}

	else
	{
	    source++;           /*让指针往后移动*/
	}
    }

    return temp_str;           /*将指针的首地址返回*/
}
