// 创建链表
void CreateList ();
// 打开文件
// 有文件 打开 文件里的数据保存到链表里
// 没有文件 自动新建文件
void OpenFile ();
// 保存数据
void SaveData ();

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