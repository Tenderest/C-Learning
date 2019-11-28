/* 字符串的复制（赋值）操作 */
/* strcpy */
#include<stdio.h>
#include<string.h>
int main(void)
{
        char str1[99] = "Li yunfeng";
        char str2[99];
        printf("before str1 = ");
        puts(str1);
        printf("Input str2: ");
        gets(str2);
        printf("before str1 = ");
        puts(str1);
        printf("before strlen(str1) = %d\n", strlen(str1));
        printf("before sizeof(str1) = %d\n", sizeof(str1));

        putchar('\n');
        
        
        printf("strcopy(str1, str2)\n");
        strcpy(str1, str2);
        printf("after  str1 = ");
        puts(str1);
        printf("after  strlen(str1) = %d\n", strlen(str1));
        printf("after  sizeof(str1) = %d\n", sizeof(str1));
        
        return 0;
}
