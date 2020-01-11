#include <stdio.h>
int main(void)
{
    int ascii;
    printf("Please enter a ascii: ");
    scanf("%d", &ascii);
    printf("ASCII -> char: %d -> %c\n", ascii, ascii);
    return 0;
}