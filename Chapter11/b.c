/* 数组和指针 */
#include<stdio.h>
int main( void )
{
        char heart[ ] = "Chen kai yue";
        char *head = "Liyunfeng";

        printf("heart[] = %s",heart);
        printf("\n");
        printf("*head = %s",head );
        printf("\n");

        putchar('\n');
        
        printf("heart[] = %p , *heart = %p  = %c\n",&heart, heart, *heart);
        printf("head = %p , *head = %p = %c\n",&head , head, *head );

        head = heart;
        // head = heart 不会使原来head中的字符串消失，它只是改变了head中存储的地址
        // 但是除非在别处保存了“xxxx”的地址，否则就找不回来了。
        // 可以改变heart中的信息，方法是访问单的数组元素
        // heart[7] = 'T';
        // 或者
        // *(heart+7) = 'T';
        putchar('\n');
        printf("head = heart\n");

        printf("heart[] = %s",heart);
        printf("\n");
        printf("*head = %s",head );
        printf("\n");

        putchar('\n');

        printf("heart[] = %p = %c\n",heart, *heart);
        printf("*head = %p = %c\n",head , *head );
        return 0;
}
