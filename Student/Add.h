// 添加学生信息
void AddStuData ();

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