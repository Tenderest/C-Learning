#include <stdio.h>
int main(void)
{
    double Water_Molecule = 3.0e-23;
    printf("The mass of the water molecule is approximately %.24lf g\n", Water_Molecule);
    int Water_Quart_One = 950;
    int Water_Quart;
    printf("Enter you have how many quart of water: ");
    scanf("%d", &Water_Quart);
    printf("Quart / Molegule = %lf\n", (Water_Quart_One * Water_Quart) / Water_Molecule);
    return 0;
}