/******************************************
函数    ：    count_bit
功能    ：    计算一个字节中是1的位的个数
参数    ：    input_num:    需要被计算的字符型数据
返回值  ：    传入数据中为1的位的个数
作者    ：    赵攀
日期    ：    2011-02-17
*******************************************/
int count_bit(char input_num)
{
    int count = 0;                     /*用来存放一个字节中每位的数值*/
    int i = 0;                         /*循环变量*/
    int total = 0;                     /*存放一个字节中为1的位的总数*/
    int mask = 0x1;                    /*定义一个掩码*/  

    for (i = 0; i < 8; i++)            /*循环检测传入数据中的每一位*/
    {
        count = input_num & mask;      /*检测当前传入数据中该位的值并将其存入count*/
	    input_num = input_num >> 1;    /*让传入数据循环右移*/
	
	    if (1 == count)                /*检测是否当前位为1*/
	    {
	        total++;                         
	    }
    }

    return total;
}
