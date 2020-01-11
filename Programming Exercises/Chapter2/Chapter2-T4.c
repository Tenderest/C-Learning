#include <stdio.h>
void Print_Fellow (void);
void Print_deny (void);
int main(void)
{
    Print_Fellow();
    Print_Fellow();
    Print_Fellow();
    Print_deny();
    return 0;
}
void Print_Fellow (void)
{
    printf("For he's a jolly good fellow!\n");
}
void Print_deny (void)
{
    printf("Which nobody can deny!\n");
}