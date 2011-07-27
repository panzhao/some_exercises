#include<stdio.h>
#include "joseph.h"

int main()
{
    int peop_num = 100;            /*定义传入参数的个数*/
    int array[peop_num];           /*定义数组*/ 
 
    init_array(array,peop_num);    /*调用初始化函数先对数组进行初始化*/

    print_last(array,peop_num);    /*通过函数ptint_last求出最后一个人的号码并打印输出*/

    return 0;
     
}
