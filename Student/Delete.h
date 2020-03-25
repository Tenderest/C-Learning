#include "struct_Stu.h"
// 删除数据
void DeleteData ();
// 按学号删除
void DeleteNum (STU * ptemp);
// 按姓名删除
void DeleteName (STU * ptemp);
// 全部删除
void DeleteAll ();





// 删除数据
void DeleteData ()
{
    int choice;
    do
    {
        system("clear");
        printf("\t\t^-------------------------------^\n");
        printf("\t\t|          3.删除学员           |\n");
        printf("\t\t^-------------------------------^\n");
        printf("\t\t1.按学号删除\n");
        printf("\t\t2.按姓名删除\n");
        printf("\t\t3.全部删除  \n");
        printf("\t\t4.返回主界面\n");
        printf("\t\t请选择：");
        scanf("%d", &choice);
        EatLine(); // 导致后续操作失败，因为没有清空输入流
        switch (choice)
        {
        case 1: // 1.按学号删除
            DeleteNum (pStu);
            break;
        case 2: // 2.按姓名删除
            DeleteName(pStu);
            break;
        case 3: // 3.全部删除
            DeleteAll();
            break;
        default: // 4.返回主界面
            break;
        }
    } while (choice != 4);
}

// 按学号删除
// 学号是唯一的 其他一样
void DeleteNum (STU * ptemp)
{
    int num;
    system("clear");
    printf("\t\t^-------------------------------^\n");
    printf("\t\t|         1.按学号删除          |\n");
    printf("\t\t^-------------------------------^\n");
    printf("\t\t请输入要删除的学号：");
    scanf("%d", &num);
    EatLine(); // 导致后续操作失败，因为没有清空输入流
    // 使ptemp指向第一个有数据的空间
    // ptemp = ptemp->pnext; // 实参 pStu ---> 形参 ptemp   ptemp指向头节点
    while (ptemp->pnext != NULL)
    {
        if (ptemp->pnext->num == num) // 找到了
        {
            STU *temp = ptemp->pnext;
            ptemp->pnext = ptemp->pnext->pnext;
            free(temp);
            while (ptemp->pnext != NULL)
            {
                ptemp->pnext->num --;
                // printf("%d\n", ptemp->pnext->num);
                ptemp = ptemp->pnext;
            }
            printf("\t\t删除完成，按任意建继续...");
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

// 按姓名删除
// 姓名是不唯一 其他一样
void DeleteName (STU * ptemp)
{
    char name[20];
    int flag = 0;
    system("clear");
    printf("\t\t^-------------------------------^\n");
    printf("\t\t|        2.按姓名删除           |\n");
    printf("\t\t^-------------------------------^\n");
    printf("\t\t请输入要查找的姓名：");
    scanf("%s", name);
    EatLine(); // 导致后续操作失败，因为没有清空输入流
    // 使ptemp指向第一个有数据的空间
    while (ptemp->pnext != NULL)
    {
        if (!strcmp(ptemp->pnext->name, name)) // 找到了
        {
            STU *temp = ptemp->pnext;
            ptemp->pnext = ptemp->pnext->pnext;
            free(temp);
            while (ptemp->pnext != NULL)
            {
                ptemp->pnext->num --;
                ptemp = ptemp->pnext;
            }
            printf("\t\t删除完成，按任意建继续...");
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
// 全部删除
void DeleteAll ()
{
    system("clear");
    printf("\t\t^-------------------------------^\n");
    printf("\t\t|          3.全部删除           |\n");
    printf("\t\t^-------------------------------^\n");
    STU * ptemp = pStu->pnext;
    if (ptemp == NULL)
    {
        printf("\t\t没有数据！按任意键退出...");
        getchar();
        return;
    }
    while (ptemp != NULL)
    {
        STU * temp = NULL;
        temp = ptemp;
        ptemp = ptemp->pnext; // 移动到下一个节点
        free(temp);
    }
    pStu->pnext = NULL;
    printf("\n\t\t全部删除完成，按任意建继续...");
    getchar();
    return;
}