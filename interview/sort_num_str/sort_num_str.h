/******************************************************
文件    :    sort_num_str.h
功能    :    对函数的声明
*******************************************************/
#ifndef    _SORT_NUM_STR_H_
#define    _SORT_NUM_STR_H_

int get_num_str(char *, char (*temp_str)[100]); /*取出字符数组中的数字字符串*/
void swap(int *, int );                         /*冒泡法排序*/
int sort_num_str(char *, char (*temp_str)[100], char *); /*将取出的数字字符串进行排序后输出*/

#endif
