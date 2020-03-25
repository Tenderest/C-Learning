#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #include <conio.h>

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
void EatLine ();

// 创建链表
// 打开文件
// 有文件 打开 文件里的数据保存到链表里
// 没有文件 自动新建文件
void CreateList ();
void OpenFile ();

// 主界面
void Welcome ();

// 添加学生信息
void AddStuData ();

// 保存数据
void SaveData ();

// 查找的主函数
// 按学号查找
// 按姓名查找
// 全部查看
// 打印读取到的所有的数据
void SearchMain ();
void SearchNum (STU * ptemp);  // 学号是唯一的 其他一样
void SearchName (STU * ptemp); // 姓名是不唯一 其他一样
void PrintAll ();