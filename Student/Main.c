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
            DeleteData();
            break;
        case 4: // 4.修改学员
            ModifyData();
            break;
        default: // 5.退出系统
            break;
        }
    } while (choice != 5); //非数字
    SaveData();
    printf("\t\t以上修改已保存！\n");
    printf("\t\t谢谢使用，再见！\n");
    return 0;
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