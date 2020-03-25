#ifndef STRUCT_STU_H_
#define STRUCT_STU_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 定义学生结构
typedef struct Stu
{
    int num;        // 学号
    char name[20];  // 姓名
    float chinese;  // 语文
    float math;     // 数学
    struct Stu *pnext; // 下一个节点
} STU; // 学生类结构体类型

STU * pStu = NULL; // 定义链表头节点指针
FILE * fp = NULL;  // 文件指针
char filename[20]; // 文件名

// 自己加的一个函数，清除\n等符号，防止输入流有过多的字符
// 导致程序出错
void EatLine ()
{
    while (getchar() != '\n')
    {
        continue;
    }
}

#endif