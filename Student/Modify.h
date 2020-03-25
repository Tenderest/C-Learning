#include "struct_Stu.h"
// 修改数据
void ModifyData ();
// 按学号修改
void ModifyNum (STU * ptemp);
// 按姓名修改
void ModifyName (STU * ptemp);

// 删除数据
void ModifyData ()
{
    int choice;
    do
    {
        system("clear");
        printf("\t\t^-------------------------------^\n");
        printf("\t\t|          4.修改学员           |\n");
        printf("\t\t^-------------------------------^\n");
        printf("\t\t1.按学号修改\n");
        printf("\t\t2.按姓名修改\n");
        printf("\t\t3.返回主界面\n");
        printf("\t\t请选择：");
        scanf("%d", &choice);
        EatLine(); // 导致后续操作失败，因为没有清空输入流
        switch (choice)
        {
        case 1: // 1.按学号查找
            ModifyNum(pStu);
            break;
        case 2: // 2.按姓名查找
            ModifyName(pStu);
            break;
        default: // 3.返回主界面
            break;
        }
    } while (choice != 3); //非数字
}

// 按学号修改
void ModifyNum (STU * ptemp)
{
    int num;
    system("clear");
    printf("\t\t^-------------------------------^\n");
    printf("\t\t|         1.按学号修改          |\n");
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
            printf("原数据：\n");
            printf("\t\t学号\t姓名\t语文\t数学\n");
            printf("\t\t%d\t%s\t%.2f\t%.2f\n", ptemp->num, ptemp->name, ptemp->chinese, ptemp->math);
            STU before = *ptemp;
            printf("修改数据：\n");
            printf("\t\t请输入姓名：");
            scanf("%s", ptemp->name);
            printf("\t\t请输入语文成绩：");
            scanf("%f", &ptemp->chinese);
            printf("\t\t请输入数学成绩：");
            scanf("%f", &ptemp->math);
            EatLine();
            STU after = *ptemp;
            printf("\t\t学号\t姓名\t语文\t数学\n");
            // before
            printf("\t\t%d\t%s\t%.2f\t%.2f\n", before.num, before.name, before.chinese, before.math);
            // after
            printf("\t\t%d\t%s\t%.2f\t%.2f\n", after.num, after.name, after.chinese, after.math);
            printf("\t\t修改完成，按任意建继续...");
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

// 按姓名修改
void ModifyName (STU * ptemp)
{
    char name[20];
    int flag = 0;
    char choice;
    system("clear");
    printf("\t\t^-------------------------------^\n");
    printf("\t\t|         2.按姓名修改          |\n");
    printf("\t\t^-------------------------------^\n");
    printf("\t\t请输入要修改的姓名：");
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
            printf("\t\t是否修改？(y/n)");
            scanf("%c", &choice);
            EatLine();
            if (choice == 'y' || choice == 'Y') // 修改
            {
                printf("原数据：\n");
                printf("\t\t学号\t姓名\t语文\t数学\n");
                printf("\t\t%d\t%s\t%.2f\t%.2f\n", ptemp->num, ptemp->name, ptemp->chinese, ptemp->math);
                STU before = *ptemp;
                printf("修改数据：\n");
                printf("\t\t请输入姓名：");
                scanf("%s", ptemp->name);
                printf("\t\t请输入语文成绩：");
                scanf("%f", &ptemp->chinese);
                printf("\t\t请输入数学成绩：");
                scanf("%f", &ptemp->math);
                EatLine();
                STU after = *ptemp;
                printf("\t\t学号\t姓名\t语文\t数学\n");
                // before
                printf("\t\t%d\t%s\t%.2f\t%.2f\n", before.num, before.name, before.chinese, before.math);
                // after
                printf("\t\t%d\t%s\t%.2f\t%.2f\n", after.num, after.name, after.chinese, after.math);
            }
            else // 不修改
            {
                ptemp = ptemp->pnext;
                continue;
            }
        }
        else // 没找到
        {
            ptemp = ptemp->pnext;
        }
    }
    if (flag == 0)
    {
        printf("\t\t对不起，没有找到这个人...按任意建继续...\n");
    }
    else
    {
        printf("\t\t修改完成，按任意建继续...");
    }
    getchar();
    return;
}