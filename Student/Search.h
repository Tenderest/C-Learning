#include "struct_Stu.h"
// 查找的主函数
void SearchMain ();
// 按学号查找
void SearchNum (STU * ptemp);  // 学号是唯一的 其他一样
// 按姓名查找
void SearchName (STU * ptemp); // 姓名是不唯一 其他一样
// 全部查看
// 打印读取到的所有的数据
void PrintAll ();

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
        printf("\t\t3.全部查看  \n");
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
        printf("\t\t对不起，没有找到这个人...按任意建继续...\n");
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
    return;
}