/*********************************************************
文件    :    strstr.c
功能    :    实现查找函数中字串的个数
函数列表:    int find_str(char *, char *) : 找到字符串中是否有字串
             count_ABC(char *, char *): 计算字符串中字串的个数
*********************************************************/
#include <stdio.h>


/********************************************************
函数    :    find_str
功能    :    判断字符串中是否和字串匹配
传入参数:    *source : 传入的源字符串
             *dest   ：子字符串
返回值  :    0:说明字符串不匹配
             1:说明与查找到字符串中的字串
********************************************************/
int find_str(char *source, char *dest)
{
    while (*source != '\0' && *dest != '\0')       /*循环判断字符串和字串*/
    {
        if (*source != *dest)                      /*如果字符不匹配返回*/
	{
	    return 0;                
	}
	
	source++;          /*如果遇到字符匹配的话继续后移*/
	dest++;
    }

    return 1;              /*如果查找到字串匹配返回*/
}


/********************************************************
函数    :    count_ABC
功能    :    计算字符串中字串的个数
传入参数:    *source :  源字符串
             *dest   :  子字符串
返回值  :    count : 字符串中字串的个数
********************************************************/
int count_ABC(char *source, char *dest)
{
    int count = 0;      /*定义count用来计算字符串字串的个数*/
    
    while (*source != '\0')    /*循环检测字符串*/
    {
        if (find_str(source, dest) == 1)     
	{
	    count++;
	}

	source++;      /*让字符串继续向后移*/
    }
    
    return count;
}