/***************************************
函数    :     count_9
功能    :     数出传入数据中共有多少个9
传入参数:     star:需要检测的数值的初始值
              end :需要检测的数值的结束值
返回值  :     返回检测数值中9个总数
作者    :     赵攀
日期    :     2011-02-15
***************************************/
int count_9(int star, int end)
{
    int total = 0;                    /*定义total用来存放*/
    int i = 0;                        
 
    for (i = star; i <= end; i++)     /*循环检测传入参数*/
    {
        total = total + find_9(i);    /*计算传入参数的总数*/
    }

    return total;
}
