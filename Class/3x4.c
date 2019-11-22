#include<stdio.h>
int main( void )
{
        int ar[3][4];
        int i, j, max = 0;
        int tempi, tempj;
        for ( i = 0; i < 3; i ++ )
        {
                for ( j =0; j < 4; j++ )
                {
                        printf("请输入第%d行第%d个数：", i + 1, j + 1);
                        scanf("%d",&ar[i][j]);
                }
        }
        for (i=0; i<3; i++ )
        {
                for (j=0; j<4; j++ )
                {
                        if (max<ar[i][j])
                        {
                                max = ar[i][j];
                                tempi = i;
                                tempj = j;
                        }
                }
        }
        printf("最大的数是%d\n它的数组下标是[%d, %d]\n",max, tempi, tempj);
        return 0;
}
