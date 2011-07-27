/*********************************************
函数    ：      sort
功能    ：      实现数组的排序
参数列表：      *array   :   传入需要进行排序的数组
                array_num:   传入数组中元素的个数
返回值  ：      无
作者    ：      赵攀
日期    ：      2011-02-16
*********************************************/
void sort(double *array, int array_num)
{
    int i = 0;
    int j = 0;
    int temp = 0;

    for (i = 0; i < array_num; i++)          /*冒泡法进行排序*/
    {
        for (j = i + 1; j < array_num; j++)
	{
	    if (array[i] > array[j])        
	    {
	       temp = array[i];
	       array[i] = array[j];
	       array[j] = temp;
	    }

	}
    }

}
