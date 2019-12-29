# 关于qsort函数的提示
* 快速排序(quick sort)  
    它把数组不断分成更小的数组，直到变成单元素数组。  
    首先，将数组分成两部分，其中一部分的指都小于另一部分的值，继续这个过程，直到数组完全排好序为止。

* C实现快速排序算法的函数名为`qsort()`。`qsort()`函数对数据对象数组进行排序，其ANSI原型为：
```c
void qsort(void *base, size_t nmemb, size_t size, int (*compar) (const void *, const void *) );
```
* 第一个参数为指向要排序的数组的头部的指针。ANSI C允许将任何数据类型指针转换为`void`类型指针，因而`qsort()`的第一个**实际参数可以指向*任何类型*的数组**。
* 第二个参数为**需要排序的项目的*数量***。函数原型将该值转换为`size_t`类型。`size_t`是由`sizeof`返回，并在标准头文件中定义的整数类型。
* 第三个参数  *因为`qsort()`将第一个参数转换为`void`指针，所以会失去每个数组元素的大小*。为补充该信息，必须把**数据对象的大小**明确地告诉`qsort()`。这就是第三个参数的作用。例如，**如果`double`数组排序，可使用`sizeof(double)`作为`qsort()`的第三个参数**。
* 第四个参数  最后，`qsort()`还需要一个指向函数的指针，被指向的函数用于确定排序顺序。这个比较函数应该接受两个参数，即分别指向进行比较的两个项目的指针。如果**第一个项目的值*大于*第二个项目的值，那么比较函数返回*正数***;如果***相等*，返回0**;如果**第一个项目的值*小于*第二个项目的值，那么返回*负数***。`qsort()`根据给定的其他信息计算出两个指针的值，然后把他们传递给比较函数。  
    比较函数采用的形式在`qsort()`原型最后的参数中声明：  
    ```c
    int (*compar) (const void *, const void *);
    ```
    这表示最后的*参数是个指向函数的**指针***，该函数返回`int`并接受两个参数，而每个参数均为指向`const void`类型的指针。*这两个指针指向需要比较的项目。*  
   [`qsort()`代码示例](https://github.com/Tenderest/C-Learning/blob/master/Chapter16/qsort.c)