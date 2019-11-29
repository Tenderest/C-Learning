// 使用指针排序字符串
#include<stdio.h>
#include<string.h>
#define SIZE 81
#define LIM 20
#define HALT " "
void strsort (char * strings[], int num);

int main(void)
{
        char input[LIM][SIZE];
        char * pstr[LIM];
        int ct = 0;
        int k = 0;
        while ( ct < LIM && gets(input[ct]) != NULL && input[ct][0] != '\0' )
        {
                pstr[ct] = input[ct];
                ct ++;
        }
        strsort(pstr, ct);
        
        // 
        // Sort after
        //
        for ( k = 0; k < ct; k ++ )
        {
                puts(pstr[k]);
        }
        
        return 0;
}
void strsort (char * strings[], int num)
{
        char * temp;
        int top, seek;
        for ( top = 0; top < num - 1; top ++ )
        {
                for ( seek = top + 1; seek < num; seek ++ )
                {
                        if ( strcmp(strings[top], strings[seek]) > 0 )
                        {
                                temp = strings[top];
                                strings[top] = strings[seek];
                                strings[seek] = temp;
                        }
                        
                }
                
        }
        
        
}
