#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
        char filename[6] = "v2ray";
        char output[8] = "Address";
        FILE * fp = NULL;
        FILE * op = NULL;

        char wg[42] = "wget https://view.freev2ray.org -O v2ray"; // wget URL
        /* char date[16] = "date >> Address"; */
        char date[15] = "date > Address";

        system(date); // 创建Address文件
        system(wg);   // 下载index.html

        // 打开文件
        fp = fopen(filename, "a+");
        op = fopen(output, "a+");
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
        
        /* printf("%d\n", index); */
        /* for ( index = 0; temp[index] != EOF; index ++ ) */
        /* { */
        /*         printf("%c", temp[index]); */
        /* } */
        
        start = strstr(temp, "vmess:"); // 搜索地址
        /* printf("%c", *start); */
        // 读取进vmess数组存储地址
        index = 0;
        while ( *start != '"')
        {
                /* printf("%c", *start); */
                vmess[index] = *start;
                start ++;
                index ++;
        }
        vmess[index] = '\0'; // 使读取完以后结束
        /* printf("%s", vmess); */
        fprintf(op, "%s\n", vmess); // 写入文件
        fclose(fp);
        fclose(op);
        system("rm -rf v2ray && cat Address");
        return 0;
}
