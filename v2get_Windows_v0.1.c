#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
        char filename[6] = "v2ray";
        char output[13] = "Address.txt";
        FILE * fp = NULL;
        FILE * op = NULL;

        char wg[42] = "wget https://view.freev2ray.org -O v2ray"; // wget URL
        char date[22] = "echo \\ > Address.txt";


        system(wg);   // 下载index.html

        // 打开文件
        fp = fopen(filename, "a+");
        op = fopen(output, "w");
        if ( op == NULL || fp == NULL )
        {
                printf("Failure");
                exit(1);
        }
        char vmess[200];
        char temp[6500];
        char * start = NULL;
        int index = 0, ch;
        // 读取进入数组temp
        while ( fscanf(fp, "%c", &temp[index]) != EOF )
        {
                index ++;
        }
        
        start = strstr(temp, "vmess:"); // 搜索地址
        // 读取进vmess数组存储地址
        index = 0;
        while ( *start != '"')
        {
                vmess[index] = *start;
                start ++;
                index ++;
        }
        vmess[index] = '\0'; // 使读取完以后结束
        fprintf(op, "%s\n", vmess); // 写入文件
        fclose(fp);
        fclose(op);

        system("clip < Address.txt");
        system("del Address.txt");
        system("del v2ray");
        return 0;
}