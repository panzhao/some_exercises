#include<stdio.h>
#include"prime.h"
int main(int argc, char *argv[])      /*使用命令行参数传入需要求的数的范围*/
{
     printf("%d\n",print_prime(atoi(argv[1]),atoi(argv[2])));    /*调用函数求出并打印素数的总数*/
     return 0;
}
