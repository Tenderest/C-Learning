#include <stdio.h>
#include <ctype.h>
int main(void)
{
        char ch;
        int numA[26] = {0};
        ch = getchar();
        while ( ch != '\n' )
        {
                if ( ch >= 'A' && ch <= 'Z' ) // isupper(ch)
                {
                        numA[ch - 'A'] ++; // !!!
                }
                ch = getchar();
        }
        for ( int i = 0; i < 26; i ++ )
        {
                if ( numA[i] > 0 ) // !!!
                {
                        printf("%c %d\n", i + 'A', numA[i]); // !!!
                }
                
        }
        return 0;
}
