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

	FILE* fp = fopen("C:\\Users\\jin\\Desktop\\����� ������ ���_�ѱ�ǥ����ȸ.csv", "r");
	if (fp == NULL)
	{
		printf("������ ������ �ʾҽ��ϴ�.\n");
		return;
	}

	fseek(fp, 0, SEEK_END); //���� �����͸� ������ ������ �̵�
	size = ftell(fp);       //���� �������� ���� ��ġ�� ����

	buffer_1 = (char*)malloc(size + 1); //����ũ��+1 ����Ʈ(���ڿ� �������� NULL)��ŭ ���� �޸� �Ҵ�
	memset(buffer_1, 0, size + 1);      //����ũ��+1 ����Ʈ��ŭ �޸𸮸� 0���� �ʱ�ȭ

	fseek(fp, 0, SEEK_SET);       //���� �����͸� ������ ó������ �̵� rewind(fp)
	fread(buffer_1, size, 1, fp); //���� ũ�⸸ŭ ���� ����

	eliminate(buffer_1, '?'); //Ư������ ����

	//printf("%s\n", buffer_1); //���� Ȯ��

	//���� ����
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

		if (i == 0 || strcmp("����", ptr) == 0)
		{
			strcpy(list[i].leader, ptr);
			ptr = strtok(NULL, "\n,");
			strcpy(list[i].company_name, ptr);
		}
		else
		{
			strcpy(list[i].leader, "����");
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

	fclose(fp);    //���� ������ �ݱ�

	free(buffer_1);  //���� �޸� ����
}
