# 关于指向函数的指针的一些提示

声明一个指向特定函数类型的指针，首先声明一个该类型的函数  然后用`(*pf)`形式的表达式代替函数名称;`pf`就成为可以指向那种类型函数的指针了,注意得是  
_**同一类型**_
```c
void ToUpper ( char * );
void ToLower ( char * );
int round ( double );
void ( * pf ) ( char * );
pf = ToUpper; //合法，ToUpper是函数 ToUpper() 的地址
pf = ToLower; //合法，ToUpper是函数 ToLower() 的地址
pf = round;   //无效，round 是错误类型的函数
pf = ToLower(); // 无效，ToLower() 不是地址
```
正像可以使用一个数据指针来访问数据一样，也可以使用函数指针来访问函数。有两个逻辑上下不一致的语法规则来实现这样的操作，以下是举例
```c
void ToUpper ( char * );
void ToLower ( char * );
void ( * pf ) ( char * );
char mis[] = "Nina Metier";
pf = ToUpper;
(*pf) (mis); // 把ToUpper作用于mis（语法1）
pf = ToLower;
pf (mis);     // 把ToLower作用于mis（语法2）
```
正如数据指针最常见的用法之一是作为函数的参数一样，函数指针最普遍的用法之一也是作为函数的参数。例如，考虑一下函数原型：
```c
void show ( void ( * fp ) ( char * ), char * str );
```
它声明了两个参量`fp`和`str`。参量`fp`是一个 _函数指针_ ，`str`是一个 _数据指针_ 。更具体一点，`fp`指向接受一个`char *`参量且返回类型为`void`的函数，`str`指向一个`char`值。因此，给定前面的声明，可以使用如下函数调用：
```c
show ( ToLower, mis ); // show()使用ToLower()函数：fp = ToLower
show ( pf, mis );      // show()使用pf指向的函数：fp = pf
```
那么`show()`如何使用传递过来的函数指针，它使用语法`fp()`或`(*fp)`来调用函数：
```c
void show ( void ( * fp ) ( char * ), char * str )
{
    (*fp) (str); // 把所选函数用于str
    puts(str);   // 显示结果
}
```
另外，带有返回值的函数能以两种不同的方式作为其他函数的参数。例如，考虑下面的情况：
```c
function1 (sqrt);        // 传递sqrt函数的地址
function2 ( sqrt(4.0) ); // 传递sqrt函数的返回值
```
第一个语句传递了`sqrt()`的地址，`function1()`可能会在代码中使用该函数。第二个语句先调用函数`sqrt()`，求出它的值，然后将返回值（在这个例子里是2.0）传递给`function2()`。