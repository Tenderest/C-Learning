#include<stdio.h>
#include<stdlib.h>
int main(void)
{
        int * p;
        p = (int *)malloc(3 * sizeof(int));
        if ( p == NULL )
        {
                puts("Memory allocation failed. Goodbye.");
                exit(EXIT_FAILURE);
        }
        for ( int i = 0; i < 3; i ++ )
        {
                printf("输入第%d个数：", i + 1);
                scanf("%d", &p[i]);
        }
        for ( int i = 0; i < 3; i ++ )
        {
                printf("p [%d] = %d\n", i, *p);
                p ++;
                
        }
        free(p); // 记得free，参数是一个指针，释放参数所指向的内存块
        return 0;
}
