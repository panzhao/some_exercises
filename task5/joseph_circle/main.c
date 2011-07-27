#include <stdio.h>
#include "joseph_circle.h"

extern struct people *head;

int main()
{
   int peop_num = 10;
   creat_circle(peop_num);
   
   struct people *temp_node = head;
   
   printf("数组中的数是：");
   print_all();
   
   
   printf("\n");

   print_last(peop_num);

   print_all();
   
   printf("检测是否释放完毕如果返回值为1释放完毕：\n");
   printf("返回值：%d\n",free_all());
   return 0;
}
