/************************************************
函数    :    find_str
功能    :    找出原来字符串中的子串
传入参数:    *str  :源字符串
             *dest :子字符串
传出参数:    无
返回值  :    0:说明没有查找到子串
             1:说明查找到子串
************************************************/
int find_str(char *str, char *dest)             
{
    while (*str != '\0' && *dest != '\0')       /*循环查找字符串中的字串是否匹配*/     
    {
        if (*str != *dest)
	{
	    return 0;
	}

	str++;           /*如果匹配继续判断下一位*/
	dest++;
    }

    return 1;
}


/***********************************************
函数    :    count_str
功能    :    计数传入的字符串中子串的个数
传入参数:    *str  :  传入的源字符串
             *dest :  需要被判断的子串
传出参数:    无
返回值  :    total :  字符串中子串的总数
***********************************************/
int count_str(char *str, char *dest)
{
    int total = 0;                         /*用来计算字符串中的字串的总数*/

    while (*str != '\0')
    {
        if (1 == find_str(str, dest))      /*如果字符串中的出现字串则total加1*/
	{
	    total++;
	}

	str++;                       /*指向下一个字符*/
    }

    return total;
}