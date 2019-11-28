/* 判断字符串是否相等的 */
#include<stdio.h>
#include<string.h>
int main(void)
{
        char name[11];
        char str[] = "yes";
        int temp;
        printf("If you input yes is yes or no.\n");
        printf("Input:");
        gets(name);
        if ( (temp = strncmp(name, str, 2) )== 0 )
        {
                printf("%d\n", temp);
        }
        else
        {
                printf("%d\n", temp);
        }
        return 0;
}
