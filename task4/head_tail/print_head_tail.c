/*********************************************************
文件名  :    find_head_tail.c
功能    :    查找字符串中的头和尾并打印从头到尾的字符
函数列表:    find_head_tail  :  查找字符串中的头和尾
             *print_head_tail:  打印字符串中从头到尾的字符
*********************************************************/
#include <stdio.h>

/********************************************************
函数    :    find_head_tail
功能    :    查找字符串中的字串
传入参数:    *source  :  传入的原来的字符串
             *dest    :  子字符串
传出参数:    无
返回值  :    0:说明没有查找到子字符串
             1:查找到子字符串
*********************************************************/
int find_head_tail(char *source, char *dest)
{
    while (*source != '\0' && *dest != '\0')   /*循环检测字符串中与子字符串是否匹配*/
    {
        if (*source != *dest)
	{
	    return 0;
	}

	source++;
	dest++;
    }

    return 1;
}

/**********************************************************
函数    :    *print_head_tail
功能    :    找到函数中的字串并传出
传入参数:    *source  :  传入的原来的字符串
             *head    :  需要被查找的字符串的头
	     *tail    :  需要被查找的字符串的尾
传入参数:    无
返回值  :    temp_dest:  查找到的字符串的首地址
***********************************************************/
char *print_head_tail(char *source, char *head, char *tail)
{    
    char *temp_dest = NULL;               /*定义临时变量用来存放查找到的子字符串的头的地址*/     
    
    while (*source != '\0')               /*循环检测字符串*/
    {   
        if (1 == find_head_tail(source, head))  /*如果字查找到字符串先记录下首地址*/
        {
            temp_dest = source;                 /*记录首地址*/
        }

	if(1 == find_head_tail(source, tail))   /*查找到尾字符串*/
	{

	    while (*tail != '\0')               /*移动到尾字符串的尾部*/
	    {
	        source++;
		tail++;
	    }

	    *source = '\0';                     /*给尾字符串的下一位加上字符串结束标记*/

	    return temp_dest;
	}

	source++;
    }	
}
