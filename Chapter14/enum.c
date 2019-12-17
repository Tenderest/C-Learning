/* 使用枚举值 */
/* 使用枚举默认时的值被按顺序指定为0、1、2 */
/* enum kids { nippy, slats, skippy, nina, liz}; */
/* 指定值：需要在声明中包含期望值 */
/* enum levels { low = 100, medium = 500, high = 2000 }; */
/* 如果只对一个常量赋值，而没有对后面的常量赋值，那么后面的常量会被赋予后续的值 */
/* enum feline { cat, lynx = 10, puma, tiger }; */
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
