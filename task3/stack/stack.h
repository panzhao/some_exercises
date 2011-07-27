/************************************************
文件名  :    stack.c
功能    :    对函数以及全局变量的声明
************************************************/
#ifndef _STACK_H_
#define _STACK_H_

#define MAX 100           /*定义的字符数组的最大值*/

int sp = 0;               /*数组下标变量*/
double stack_array[MAX];  /*定义的字符数组*/
void push(double );       /*入栈函数*/
double pop();             /*出栈函数*/

#endif
