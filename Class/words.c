/* 统计多少个单词的程序 */
#include<stdio.h>
int main(void)
{
        char string[81];
        int word, index, num = 0;
        gets(string);
        for (index = 0; index < strlen(string); index ++ )
        {
                if ( string[index] == ' ' )
                {
                        word = 0;
                }
                else
                {
                        if ( word == 0 )
                        {
                                num ++;
                                word = 1;
                        }
                }
        }
        printf("Words = %d\n", num );
        return 0;
}
