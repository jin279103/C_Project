#include "header.h"

void save(Student* list)
{
	FILE* fp;
	fp = fopen("C:\\Users\\jin\\Desktop\\list.txt", "w");

	if (fp == NULL)
	{
		printf("파일 오픈에 실패했습니다.\n");
		exit(-1);
	}

	for (int i = 0; i < 6; i++)
	{
		fprintf(fp, "%5d %15s %15s\n", list[i].id, list[i].teamname, list[i].company);
	}

	fclose(fp);
}