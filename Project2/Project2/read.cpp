#include "header.h"

void eliminate(char* str, char ch)
{
	for (; *str != 0; str++)
	{
		if (*str == ch)
		{
			strcpy(str, str + 1);
			str--;
		}
	}
}
void read(Student* list)
{
	char *buffer_1, *ptr;
	char buffer_2[10] = { 0, };
	int size, i=0;

	FILE* fp = fopen("C:\\Users\\jin\\Desktop\\서울반 교육생 명단_한국표준협회.csv", "r");
	if (fp == NULL)
	{
		printf("파일이 열리지 않았습니다.\n");
		return;
	}

	fseek(fp, 0, SEEK_END); //파일 포인터를 파일의 끝으로 이동
	size = ftell(fp);       //파일 포인터의 현재 위치를 얻음

	buffer_1 = (char*)malloc(size + 1); //파일크기+1 바이트(문자열 마지막의 NULL)만큼 동적 메모리 할당
	memset(buffer_1, 0, size + 1);      //파일크기+1 바이트만큼 메모리를 0으로 초기화

	fseek(fp, 0, SEEK_SET);       //파일 포인터를 파일의 처음으로 이동 rewind(fp)
	fread(buffer_1, size, 1, fp); //파일 크기만큼 값을 읽음

	eliminate(buffer_1, '?'); //특수문자 제거

	//printf("%s\n", buffer_1); //내용 확인

	//내용 분할
	while (1)
	{
		if (i == 0)
		{
			ptr = strtok(buffer_1, "\n,");
		}
		else
		{
			ptr = strtok(NULL, "\n,");
			if (ptr == NULL) break;
		}

		if (i == 0 || strcmp("조장", ptr) == 0)
		{
			strcpy(list[i].leader, ptr);
			ptr = strtok(NULL, "\n,");
			strcpy(list[i].company_name, ptr);
		}
		else
		{
			strcpy(list[i].leader, "조원");
			strcpy(list[i].company_name, ptr);
		}

		ptr = strtok(NULL, "\n,");
		strcpy(list[i].name, ptr);
		ptr = strtok(NULL, "\n,");
		strcpy(list[i].email, ptr);
		ptr = strtok(NULL, "\n,");

		if (ptr[0] == '"')
		{
			ptr = strcat(ptr, strtok(NULL, ","));
			strcpy(list[i].university, ptr);
		}
		else
		{
			strcpy(list[i].university, ptr);
		}

		ptr = strtok(NULL, "\n,");
		strcpy(list[i].major, ptr);

		i++;
	}

	fclose(fp);    //파일 포인터 닫기

	free(buffer_1);  //동적 메모리 해제
}
