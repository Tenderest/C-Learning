#include <stdio.h>
void Print_Smile (void);
int main(void)
{
    Print_Smile();
    Print_Smile();
    Print_Smile();
    putchar('\n');
    
    Print_Smile();
    Print_Smile();
    putchar('\n');

    Print_Smile();
    putchar('\n');
    return 0;
}
void Print_Smile (void)
{
    printf("Smile!");
}