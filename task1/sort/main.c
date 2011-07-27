#include<stdio.h>
#include"sort.h"
int main()
{
    int i = 0;                         /*定义循环变量*/  
    double array[5] = {-3, 4,3,7,8};   /*定义需要排序的数组*/

    sort(array, 5);                    /*调用函数对数组进行排序*/  

    for (i = 0; i < 5; i++)            /*循环输出已经进行排序的数组*/ 
    {
        printf("%f\n",array[i]);       
    }
    
    return 0;
}
