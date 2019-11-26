/* 判断某行中大小写、数字多少个的程序 */
#include<stdio.h>
int main(void)
{
        char text[3][80];
        gets(text[0]);
        gets(text[1]);
        gets(text[2]);
        int row, j;
        int Acount = 0, acount = 0, numcount = 0, spacecount = 0, other = 0;
        printf("请输入文章第几行：");
        scanf("%d", &row);
        row = row - 1;
        for ( j = 0; j < 80 && text[row][j] != '\0'; j ++ )
        {
                if ( text[row][j] >= 'A' && text[row][j] <= 'Z' )
                {
                        Acount ++;
                }
                else if ( text[row][j] >= 'a' && text[row][j] <= 'z' )
                {
                        acount ++;
                }
                else if ( text[row][j] >= '0' && text[row][j] <= '9' )
                {
                        numcount ++;
                }
                else if ( text[row][j] == ' ' )
                {
                        spacecount ++;
                }
                else
                {
                        other ++;
                }
                
        }
        
        printf("Acount = %d\n", Acount);
        printf("acount = %d\n", acount);
        printf("numcount = %d\n", numcount);
        printf("spacecount = %d\n", spacecount);
        printf("other = %d\n", other);
        return 0;
}
