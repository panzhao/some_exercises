/*******************************************
函数    ：      find_9
功能    ：      找出参数中的9的个数
传入参数：      传入被检测的数值
返回值  ：      返回值传人参数中9的个数
作者    ：      赵攀
日期    ：      2011-02-16
******************************************/
int find_9(int single_num)
{   
    int count = 0;                       /*计算一个传入数值中9的个数*/

    while(single_num > 0)                /*对传入的数值进行循环判断，直达每位都判断完*/
    {
        if (single_num % 10 == 9)        /*判断传入数值的个位是否为9*/
	{
            count++;    	         /*如果个位为9则使count加1*/
	}

	single_num = single_num / 10;    /*使传入数值的每一位都置成个位*/
    }

    return count;
}
