#include<stdio.h>
#define MAX 81
int main(void)
{
        char name[MAX];
        char * pstr;
        printf("Before:\n");
        printf("&name = %p\n", name);
        printf("&pstr = %p\n", pstr);
        printf("fgets name = ");
        pstr = fgets(name, MAX, stdin);
        /* printf("return fgets = %p\n", fgets(name) ); */

        putchar('\n');
        printf("After:\n");
        printf("&name = %p\n", name);
        printf("&pstr = %p\n", pstr);

        // Out
        printf("Print:\n");
        printf("name = ");
        fputs(name, stdout);
        printf("pstr = ");
        fputs(pstr, stdout);
        /* printf("name = %s\n", name); */
        /* printf("pstr = %s\n", pstr); */
        /* fputs(name); */
        return 0;
}
