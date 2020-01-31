#include <stdio.h>
int main(void)
{
        /* int time[4] = {0, 3, 2, 0}; */
        /* printf("time[0] = %d\n", time[0]); */
        /* printf("time[1] = %d\n", time[1]); */
        /* printf("time[2] = %d\n", time[2]); */
        /* printf("time[3] = %d\n", time[3]); */
        /* printf("\n\nuse for loop display:\n\n"); */
        /* for ( int i = 0; i < 4; i ++ ) */
        /* { */
        /*         printf("time[%d] = %d\n", i,  time[i]); */
        /* } */
        int n;
        int time[10] = {0};
        scanf("%d", &n);
        for ( int i = 0; i < n; i ++ )
        {
                int temp;
                scanf("%d", &temp);
                while ( temp > 0 )
                {
                        time[temp % 10] ++;
                        temp /= 10;
                }
        }
        int max = 0;
        for ( int i = 0; i < 10; i ++ )
        {
                if ( max < time[i] )
                {
                        max = time[i];
                }
        }
        printf("%d:", max);
        for ( int i = 0; i < 10; i ++ )
        {
                if ( max == time[i] )
                {
                        printf(" %d", i);
                }
        }
        putchar('\n');
        return 0;
}
