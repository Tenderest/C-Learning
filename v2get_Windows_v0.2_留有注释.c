#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
/*
port �� uuid �Ѿ��õ�
�滻�����еļ��ɣ���ɣ�
����������Ŀ¼ ������ config.json
����ͨ��ͼ�ν����л��ڵ�ﵽ�������õĹ���
��ȡ���ã���ɣ�
C:\Users\Liyunfeng\Desktop\v2rayN-Core\config.json

*/
int main(void)
{
	//printf("\n\nargument\n%d -> %s11111\n", argc, argv[1]);
	char filename[6] = "v2ray"; // ���غõ��ļ�
	char old_config_file[] = "C:/Users/Liyunfeng/Desktop/v2rayN-Core/config.json"; // ��Ҫ�ֶ��޸�
	char output[13] = "Address.txt"; // �����ļ�
	FILE *fp = NULL;
	FILE *cp = NULL;
	FILE *op = NULL;
	char wg[] = "wget view.freev2ray.org -O v2ray"; // wget URL
	// ��ֹ���еĽ���
	char kill[] = "taskkill /F /IM v2ray.exe";
	// ��ֹ���еĽ��̣�����������ͼ�ν���Ľ��̣�
	char killgui[] = "taskkill /F /IM v2rayN.exe";
	char killguicore[] = "taskkill /F /IM wv2ray.exe";
	// ��ʼ���г��� ʹ�� "v2ray" �������ֱ�����г���ǰ������˻�������
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
	system(wg);   // ����index.html

	// ���ļ�
	fp = fopen(filename, "a+");
	cp = fopen(old_config_file, "a+");

	if ( fp == NULL || cp == NULL )
	{
		printf("Failure");
		exit(1);
	}
	char temp[6500]; // �����ļ�����
	char old_config_temp[6500]; // ��ȡԭ�������ý�����
	char port[10]; // �˿�
	char uuid[50]; // uuid
	char *pport = NULL;
	char *puuid = NULL;
	int index = 0, ch;
	// ��ȡ���غõ��ļ���������temp
	while ( fscanf(fp, "%c", &temp[index]) != EOF )
	{
		index ++;
	}

	// ��ȡ���غõ��ļ���������temp
	index = 0;
	while ( fscanf(cp, "%c", &old_config_temp[index]) != EOF )
	{
		index ++;
	}
	//printf("\n\nOld config\n\n%s\n\n", old_config_temp);
	// �����ļ��Ѿ���ȡ��������
	char *p_old_port = NULL; // �����ļ��Ķ˿�
	char *p_old_uuid = NULL; // �����ļ���uuid
	// �������ļ��� port ������
	pport = strstr(temp, "\"port\""); // �ҳ����µĶ˿�
	puuid = strstr(temp, "uuid"); // �ҳ����µ�uuid
	p_old_port = strstr(old_config_temp, "top"); // ��ԭ�����õĶ˿�
	p_old_uuid = strstr(old_config_temp, "id\""); // ��ԭ�����õ� uuid
	p_old_port = (p_old_port + 26); // ָ������
	p_old_uuid = (p_old_uuid + 6); // ָ������
	////*(p_old_port + 5) = '\0';
	//printf("\n\nConfig port -> %s000\n", p_old_port);
	//printf("\n\nConfig uuid -> %s000\n", p_old_uuid);
	// ���Ե�ʱ����������Ҫ����һ��GUI���

	// ���µĶ˿�
	pport = (pport + 7); // port ָ������
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

	puuid = (puuid + 6); // uuid ָ������
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
	// д������
	fprintf(op, "%s", old_config_temp); // д���ļ�


	fclose(op);
	//system("pause");
	system("title ����v2ray�ɹ����رմ���ֹͣ����");
	system("del v2ray");
	system(v2ray);
	return 0;
}
