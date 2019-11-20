#include<stdio.h>
void part1 ( void );
void part2 ( void );
void part3 ( void );
int main( void )
{
        int i, k;
        // Part1
        part1 ( );
        // Part2
        part2 ( );
        // Part3
        part3 ( );
        return 0;
}
void part1 ( void ) // Printf Part1
{
        int i, k;
        for ( i = 0; i < 3; i ++ )
        {
                for ( k = 0; k < 7 - i * 2; k ++ )
                {
                        printf(" ");
                }
                for ( k = 0; k < 5 + i * 4; k ++ )
                {
                        printf("#");
                }
                for ( k = 0; k < 9 - i * 4; k ++ )
                {
                        printf(" ");
                }
                for ( k = 0; k < 5 + i * 4; k ++ )
                {
                        printf("#");
                }
                putchar( '\n' );
        }
}
void part2 ( void ) // Printf Part2
{
        int i, k;
        for ( i = 0; i < 3; i ++ )
        {
                for ( k = 0; k < 2; k ++ )
                {
                        printf(" ");
                }
                for ( k = 0; k < 29; k ++ )
                {
                        printf("#");
                }
                putchar( '\n' );
        }
}
void part3 ( void ) // Printf Part3
{
        int i, k;
        for ( i = 0; i < 7; i ++ )
        {
                for ( k = 0; k < 4 + i * 2; k ++ )
                {
                        printf(" ");
                }
                for ( k = 0; k < 25 - i*4; k ++ )
                {
                        printf("#");
                }
                putchar( '\n' );
        }
}
