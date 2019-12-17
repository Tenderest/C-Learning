/* 使用枚举值 */
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define LEN 30
enum spectrum { red, orange, yellow, green, blue, violet };
const char * colors[] = { "red", "oranger", "yellow", "green", "blue", "violet" };
int main(void)
{
        char choice[LEN];
        enum spectrum color;
        bool color_is_found = false;
        puts("Enter a color (empty line to quit): ");
        while ( gets(choice) != NULL && choice[0] != '\0' )
        {
                for ( color = red; color <= violet; color ++ )
                {
                        if ( strcmp(choice, colors[color]) == 0 )
                        {
                                color_is_found = true;
                                break;
                        }
                        
                }
                if ( color_is_found )
                {
                        switch ( color )
                        {
                                case red:
                                        puts("Rose are red.");
                                        break;
                                case orange:
                                        puts("Rose are orange.");
                                        break;
                                case yellow:
                                        puts("Rose are yellow.");
                                        break;
                                case green:
                                        puts("Rose are green.");
                                        break;
                                case blue:
                                        puts("Rose are blue.");
                                        break;
                                case violet:
                                        puts("Rose are violet.");
                                        break;
                        }
                }
                else
                {
                        printf("I don't know about the color %s.\n", choice);
                }
                color_is_found = false;
                puts("Next color, please(empty line to quit):");
        }
        puts("GoodBye!");
        return 0;
}
