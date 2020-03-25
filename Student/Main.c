/*     文件名称：Main.c
    文件描述：实现文件+链表学生成绩管理系统
*/

#include "Student.h"

int main(void)
{
    int choice;
    OpenFile();
    do
    {
        Welcome();
        printf("\t\t请选择功能：");
        scanf("%d", &choice);
        EatLine();
        switch (choice)
        {
        case 1: // 1.添加学员
            AddStuData();
            break;
        case 2: // 2.查找学员
            SearchMain();
            break;
        case 3: // 3.删除学员
            break;
        case 4: // 4.修改学员
            break;
        default: // 5.退出系统
            break;
        }
    } while (choice != 5);
    SaveData();
    printf("谢谢使用，再见！\n");
    return 0;
}

// 自己加的一个函数，清除\n等符号，防止输入流有过多的字符
// 导致程序出错
void EatLine ()
{
    while (getchar() != '\n')
    {
        continue;
    }
}

// 创建链表
void CreateList ()
{
    pStu = (STU *) malloc(sizeof(STU));
    pStu->pnext = NULL;
}

// 打开文件
// 有文件 打开 文件里的数据保存到链表里
// 没有文件 自动新建文件
void OpenFile ()
{
    char choice;
    // 2个结构体指针
    STU * pnew = NULL;  // 指向新创建的节点
    STU * ptemp = NULL; // 保存第一个节点

    CreateList(); // 先创建链表
    ptemp = pStu; // 保存第一个节点
    printf("\t\t^-------------------------------^\n");
    printf("\t\t|            欢迎使用           |\n");
    printf("\t\t|-------------------------------|\n");
    printf("\t\t|使用说明：                     |\n");
    printf("\t\t|         打开示例：3n2b.txt    |\n");
    printf("\t\t^-------------------------------^\n");

    while (1)
    {
        printf("\t\t请输入文件名：");
        scanf("%s", &filename);
        if ( (fp = fopen(filename, "r") ) == NULL) //-------> // 只读的方式打开一个不存在的文件会失败
        {
            printf("\t\t没有该班级的数据，是否创建?(y/n)");
            EatLine();
            // fflush(stdin); // 无法清空输入流，故自己编写另一个函数来达到此效果
            scanf("%c", &choice);
            if (choice == 'y' || choice == 'Y') //----------> // 选择了y
            {
                if ( (fp = fopen(filename, "a+")) == NULL ) // 创建失败
                {
                    printf("\t\t创建失败");
                    exit(1);
                }
                else //-------------------------------------> // 创建成功
                {
                    break;
                }
            }
            else //-----------------------------------------> // 没有选择y
            {
                continue;
            }
        }
        else //---------------------------------------------> // 文件存在
        {
            break;
        }
        fclose(fp);
    }
    
    // 已经打开/创建了文件 但并不知道是否有数据
    // 数据 ----> 链表
    while (1)
    {
        // 开辟内存空间 !!
        pnew = (STU *) malloc (sizeof(STU));
        int flagread = fscanf(fp, "%d\t%s\t%f\t%f\n", &pnew->num, pnew->name, &pnew->chinese, &pnew->math);
        if (flagread == EOF) // 没有正确读入
        {
            free(pnew); // 释放分配的内存 !!
            break;
        }
        pnew->pnext = NULL;
        ptemp->pnext = pnew;
        ptemp = ptemp->pnext; // 尾插法
    }
    
    
}

// 主界面
void Welcome ()
{
    system("clear");
    printf("\t\t^-------------------------------^\n");
    printf("\t\t|          学生成绩管理         |\n");
    printf("\t\t|-------------------------------|\n");
    printf("\t\t|          1.添加学员           |\n");
    printf("\t\t|          2.查找学员           |\n");
    printf("\t\t|          3.删除学员           |\n");
    printf("\t\t|          4.修改学员           |\n");
    printf("\t\t|          5.退出系统           |\n");
    printf("\t\t^-------------------------------^\n");
}

// 添加学生信息
void AddStuData ()
{
    int number; // 要添加的学生个数
    STU * pnew = NULL;
    STU * ptemp = NULL;
    system("clear");
    printf("\t\t^-------------------------------^\n");
    printf("\t\t|          1.添加学员           |\n");
    printf("\t\t^-------------------------------^\n");
    printf("\t\t要添加几个学生：");
    scanf("%d", &number);
    EatLine(); // 导致后续操作失败，因为没有清空输入流
    for (int index = 0; index < number; index ++)
    {
        pnew = (STU *) malloc (sizeof(STU));
        printf("\t\t正在添加第%d个学生信息：\n", index + 1);
        printf("\t\t请输入学号：");
        scanf("%d", &pnew->num);
        ptemp = pStu->pnext; // 实参 pStu ---> 形参 ptemp   ptemp指向头节点
        while (ptemp != NULL)
        {
            if (pnew->num == ptemp->num)
            {
                printf("\t\t学号重复了，请重新输入：");
                scanf("%d", &pnew->num);
                ptemp = pStu->pnext;
            }
            ptemp = ptemp->pnext;
        }
        printf("\t\t请输入姓名：");
        scanf("%s", pnew->name);
        printf("\t\t请输入语文成绩：");
        scanf("%f", &pnew->chinese);
        printf("\t\t请输入数学成绩：");
        scanf("%f", &pnew->math);

        // 插入到链表里去
        if (pStu->pnext == NULL) // 说明链表里面一个数据都没有
        {
            pnew->pnext = NULL;
            pStu->pnext = pnew;
        }
        else // 有数据的情况
        {
            ptemp = pStu;
            while (ptemp != NULL)
            {
                if (ptemp->pnext != NULL) // 在中间的情况
                {
                    // 比前一个大，比后一个小
                    if (pnew->num > ptemp->num && pnew->num < ptemp->pnext->num)
                    {
                        pnew->pnext = ptemp->pnext;
                        ptemp->pnext = pnew;
                        break;
                    }
                }
                else // ptemp在尾部，最后一个
                {
                    // 尾部插入
                    pnew->pnext = NULL;
                    ptemp->pnext = pnew;
                    break;
                }
                ptemp = ptemp->pnext;
            }
        }
    }
}

// 保存数据
void SaveData ()
{
    STU * ptemp = pStu->pnext;
    fp = fopen(filename, "w");
    if (fp == NULL) // 打开失败
    {
        printf("\t\t文件打开失败！\n");
    }
    else // 打开成功
    {
        while (ptemp != NULL)
        {
            fprintf(fp, "%d\t%s\t%f\t%f\n", ptemp->num, ptemp->name, ptemp->chinese, ptemp->math);
            ptemp = ptemp->pnext;
        }
    }
    fclose(fp);
}

// 查找的主函数
void SearchMain ()
{
    int choice;
    do
    {
        system("clear");
        printf("\t\t^-------------------------------^\n");
        printf("\t\t|          2.查找学员           |\n");
        printf("\t\t^-------------------------------^\n");
        printf("\t\t1.按学号查找\n");
        printf("\t\t2.按姓名查找\n");
        printf("\t\t3.全部查看\n");
        printf("\t\t4.返回主界面\n");
        printf("\t\t请选择：");
        scanf("%d", &choice);
        EatLine(); // 导致后续操作失败，因为没有清空输入流
        switch (choice)
        {
        case 1: // 1.按学号查找
            SearchNum (pStu);
            break;
        case 2: // 2.按姓名查找
            SearchName(pStu);
            break;
        case 3: // 3.全部查看
            PrintAll();
            break;
        default: // 4.返回主界面
            break;
        }
    } while (choice != 4);
}
// 按学号查找
// 学号是唯一的 其他一样
void SearchNum (STU * ptemp)
{
    int num;
    system("clear");
    printf("\t\t^-------------------------------^\n");
    printf("\t\t|         1.按学号查找          |\n");
    printf("\t\t^-------------------------------^\n");
    printf("\t\t请输入要查找的学号：");
    scanf("%d", &num);
    EatLine(); // 导致后续操作失败，因为没有清空输入流
    // 使ptemp指向第一个有数据的空间
    ptemp = ptemp->pnext; // 实参 pStu ---> 形参 ptemp   ptemp指向头节点
    while (ptemp != NULL)
    {
        if (ptemp->num == num) // 找到了
        {
            printf("\t\t学号\t姓名\t语文\t数学\n");
            printf("\t\t%d\t%s\t%.2f\t%.2f\n", ptemp->num, ptemp->name, ptemp->chinese, ptemp->math);
            printf("\t\t打印完成，按任意建继续...");
            getchar();
            return;
        }
        else  // 没找到
        {
            ptemp = ptemp->pnext;
        }
    }
    printf("\t\t对不起，没有找到...按任意建继续...\n");
    getchar();
    return;
}

// 按姓名查找
// 姓名是不唯一 其他一样
void SearchName (STU * ptemp)
{
    char name[20];
    int flag = 0;
    system("clear");
    printf("\t\t^-------------------------------^\n");
    printf("\t\t|         2.按姓名查找          |\n");
    printf("\t\t^-------------------------------^\n");
    printf("\t\t请输入要查找的姓名：");
    scanf("%s", name);
    EatLine(); // 导致后续操作失败，因为没有清空输入流
    // 使ptemp指向第一个有数据的空间
    ptemp = ptemp->pnext; // 实参 pStu ---> 形参 ptemp   ptemp指向头节点
    while (ptemp != NULL)
    {
        if (!strcmp(ptemp->name, name)) // 找到了
        {
            if (flag == 0)
            {
                printf("\t\t学号\t姓名\t语文\t数学\n");
            }
            printf("\t\t%d\t%s\t%.2f\t%.2f\n", ptemp->num, ptemp->name, ptemp->chinese, ptemp->math);
            flag ++;
        }
        ptemp = ptemp->pnext;
    }
    if (flag == 0)
    {
        printf("\t\t对不起，没有找到...按任意建继续...\n");
    }
    else
    {
        printf("\t\t打印完成，按任意建继续...");
    }
    getchar();
    return;
}

// 全部查看
// 打印读取到的所有的数据
void PrintAll ()
{
    system("clear");
    printf("\t\t^-------------------------------^\n");
    printf("\t\t|          3.全部查看           |\n");
    printf("\t\t^-------------------------------^\n");
    STU * ptemp = pStu->pnext;
    if (ptemp == NULL) // 这个文件/链表没有数据
    {
        printf("\t\t没有数据！按任意键退出...");
        getchar();
        return;
    }
    printf("\t\t学号\t姓名\t语文\t数学\n");
    while (ptemp != NULL)
    {
        // 打印读取到的数据
        printf("\t\t%d\t%s\t%.2f\t%.2f\n", ptemp->num, ptemp->name, ptemp->chinese, ptemp->math);
        ptemp = ptemp->pnext; // 移动到下一个节点
    }
    printf("\n\t\t打印完成，按任意建继续...");
    getchar();
}