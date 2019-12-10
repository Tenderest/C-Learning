#include<stdio.h>
int main(void)
{
    struct new
    {
        char name[21];
        int age;
    };
    // struct new Mike;
    struct new Mike = {
        .age = 20,
        .name = "Mike",
        
    }; 
/*     scanf("%s", Mike.name);
    scanf("%d", &Mike.age); */
    printf("%s %d age.\n", Mike.name, Mike.age);
    return 0;
}