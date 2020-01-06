/*     
第六章编程题第4题
Page 150 T4
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
#include<stdio.h>
int main( void )
{
        char supper;
        int index1, index2, index3, index4;
        char ch, a, x;
        //
        // Scanf ch
        //
        scanf("%c",&ch);
        int rows = ch - 64;
        //printf("%d\n",rows);
        //
        // Loop
        //
        for ( index1 = 0; index1 < rows; index1 ++ )
        {
                for ( index2 = index1; index2 < rows; index2 ++ )
                {
                        printf(" ");
                }
                a = 'A';
                for ( index3 = 0; index3 <= index1; index3 ++ )
                {
                        printf("%c",a);
                        a ++;
                }
                
                x = ch + index1 - rows;
                for ( index4 = index1; index4 > 0; index4 -- )
                {
                        printf("%c",x);
                        x --;
                }
                printf("\n");
        }
        return 0;
}
