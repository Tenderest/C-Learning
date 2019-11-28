/* 连接两个字符串 */
/* 在第一个字符串后面连接第二个字符串 */
#include<stdio.h>
#include<string.h>
int main(void)
{
        char name[11]; // 数组的大小存在越界问题
        char str[] = ", how are you?";
        printf("What is your name?\n");
        /* fgets(name, 11, stdin); */
        gets(name);
        printf("Hello %s.( %d )\n", name, strlen(name));
        strcat(name, str);
        printf("%s( %d )\n", name, strlen(name));
        return 0;
}
