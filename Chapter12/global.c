/* 具有外部链接的静态变量 */
/* 外部链接的静态变量具有文件作用域、外部链接和静态存储时期 */
/* 关键字 extern */
/* 把变量的定义声明放在所有函数之外，即创建了一个外部变量 */
/* 为使程序更加清晰，可以在使用外部变量的函数中通过使用extern关键字再次声明它 */
/* 使用外部变量 */
#include<stdio.h>
int units = 0; // 一个外部变量
void critic (void);
int main(void)
{
        extern int units; // 可选的二次声明
        printf("How many pounds to a firkin of butter?\n");
        scanf("%d", &units);
        while ( units != 65 )
        {
                critic();
        }
        printf("You must have looked it up!\n");
        
        return 0;
}
void critic (void)
{
        /* 这里省略了可选的二次声明 */
        printf("No luck, chummy. Try again.\n");
        scanf("%d", &units);
}
