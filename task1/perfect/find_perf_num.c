/*******************************************
函数名:        find_perf_num
功能  :        判断传入的数值是否为完数
输入值：       传入需要判断的数值
返回值：       判断传入的参数是否为完数
日期  ：       2011-02-16
作者  ：       赵攀
*******************************************/
int find_perf_num(int input_num)
{
    int divisor = 0;                     /*定义因子并初始化*/ 
    int total = 0;                       /*用来计算传入数值因子的总和*/

    if(input_num == 0 || input_num == 1) /*进行特殊处理，排除0和1*/
    {
        return 0;
    }

    for (divisor = 1; divisor < input_num; divisor++)   /*使用循环找出传入数值的因子*/
    {
        if(input_num % divisor == 0)                    /*判断是否为传入参数的因子*/
	{
	    total = total + divisor;                    /*如果是传入参数的因子存入total中*/  
	}
    }
    
    if (total == input_num)                             /*判断传入数值因子之和是否等于传入参数*/
    {
        return 1;                                    
    }

    return 0;
}
