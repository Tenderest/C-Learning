#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
/*
port 和 uuid 已经拿到
替换配置中的即可（完成）
配置在启动目录 名字是 config.json
可以通过图形界面切换节点达到更改配置的功能
读取配置（完成）
C:\Users\Liyunfeng\Desktop\v2rayN-Core\config.json

*/
int main(void)
{
	//printf("\n\nargument\n%d -> %s11111\n", argc, argv[1]);
	char filename[6] = "v2ray"; // 下载好的文件
	char old_config_file[] = "C:/Users/Liyunfeng/Desktop/v2rayN-Core/config.json"; // 需要手动修改
	char output[13] = "Address.txt"; // 配置文件
	FILE *fp = NULL;
	FILE *cp = NULL;
	FILE *op = NULL;
	char wg[] = "wget view.freev2ray.org -O v2ray"; // wget URL
	// 终止运行的进程
	char kill[] = "taskkill /F /IM v2ray.exe";
	// 终止所有的进程（包括启动的图形界面的进程）
	char killgui[] = "taskkill /F /IM v2rayN.exe";
	char killguicore[] = "taskkill /F /IM wv2ray.exe";
	// 开始运行程序 使用 "v2ray" 命令可以直接运行程序前提加入了环境变量
	char v2ray[] = "v2ray";
	
	printf("Select mode:\n\t1. Single 2. All\n\tSelect: ");
	char select;
	scanf("%c", &select);



	if (select == '2')
	{
		system(killgui);
		system(killguicore);
		system(kill);
	}
	else
	{
		system(kill);
	}
	system(wg);   // 下载index.html

	// 打开文件
	fp = fopen(filename, "a+");
	cp = fopen(old_config_file, "a+");

	if ( fp == NULL || cp == NULL )
	{
		printf("Failure");
		exit(1);
	}
	char temp[6500]; // 缓存文件数组
	char old_config_temp[6500]; // 读取原来的配置进数组
	char port[10]; // 端口
	char uuid[50]; // uuid
	char *pport = NULL;
	char *puuid = NULL;
	int index = 0, ch;
	// 读取下载好的文件进入数组temp
	while ( fscanf(fp, "%c", &temp[index]) != EOF )
	{
		index ++;
	}

	// 读取下载好的文件进入数组temp
	index = 0;
	while ( fscanf(cp, "%c", &old_config_temp[index]) != EOF )
	{
		index ++;
	}
	//printf("\n\nOld config\n\n%s\n\n", old_config_temp);
	// 配置文件已经读取进了数组
	char *p_old_port = NULL; // 配置文件的端口
	char *p_old_uuid = NULL; // 配置文件的uuid
	// 找配置文件的 port 在哪里
	pport = strstr(temp, "\"port\""); // 找出最新的端口
	puuid = strstr(temp, "uuid"); // 找出最新的uuid
	p_old_port = strstr(old_config_temp, "top"); // 找原来配置的端口
	p_old_uuid = strstr(old_config_temp, "id\""); // 找原来配置的 uuid
	p_old_port = (p_old_port + 26); // 指向数字
	p_old_uuid = (p_old_uuid + 6); // 指向数字
	////*(p_old_port + 5) = '\0';
	//printf("\n\nConfig port -> %s000\n", p_old_port);
	//printf("\n\nConfig uuid -> %s000\n", p_old_uuid);
	// 调试的时候会出问题需要启动一次GUI解决

	// 最新的端口
	pport = (pport + 7); // port 指向数字
	*(pport + 5) = '\0';
	//printf("port -> %s000\n", pport);
	//printf("\nwhile print port  -> ");
	while (*pport != '\0')
	{
		//printf("%c", *pport);
		*p_old_port = *pport;
		p_old_port ++;
		pport ++;
	}
	//printf("abc\n");

	puuid = (puuid + 6); // uuid 指向数字
	*(puuid + 36) = '\0';
	//printf("uuid -> %s111", puuid);
	//printf("\nwhile print uuid  -> ");
	while (*puuid != '\0')
	{
		//printf("%c", *puuid);
		*p_old_uuid = *puuid;
		p_old_uuid ++;
		puuid ++;
	}
	//printf("qwe\n");


	fclose(fp);
	fclose(cp);

	op = fopen(old_config_file, "w");
	if ( op == NULL )
	{
		printf("Failure");
		exit(1);
	}
	// 写回配置
	fprintf(op, "%s", old_config_temp); // 写入文件


	fclose(op);
	//system("pause");
	system("title 开启v2ray成功，关闭窗口停止代理");
	system("del v2ray");
	system(v2ray);
	return 0;
}
