/* 数组和指针 */
#include<stdio.h>
int main( void )
{
        int min, max;
        int index;
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
