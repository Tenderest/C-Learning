/* 给函数传递一个结构和函数返回一个结构 */
#include<stdio.h>
#include<string.h>

struct namect {
        char fname[20];
        char lname[20];
        int letters;
};

struct namect getinfo ( void ); // 返回值是一个结构
struct namect makeinfo ( struct namect ); // 参量是一个结构 省略的了参量的名字
void showinfo ( struct namect );

int main(void)
{
        struct namect person;
        person = getinfo();
        person = makeinfo(person);
        showinfo(person);
        return 0;
}
struct namect getinfo ( void )
{
        struct namect temp;
        printf("Please enter your first name:");
        gets(temp.fname);
        printf("Please enter you last name:");
        gets(temp.lname);
        return temp;
        
}
struct namect makeinfo ( struct namect info )
{
        info.letters = strlen(info.fname) + strlen(info.lname);
        return info;
}
void showinfo ( const struct namect infoo)
{
        printf("%s %s, your name contains %d letters.\n", infoo.fname, infoo.lname, infoo.letters);
}
