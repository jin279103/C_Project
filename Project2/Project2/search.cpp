#include "header.h"

void search_leader(Student* list)
{
	int i;
	char search_name[10] = { 0, }, searched_company_name[20] = { 0, }, timestr[30] = { 0, };
	time_t t;
	FILE* fp;

	fp = fopen("C:\\Users\\jin\\Desktop\\����� ������ ���_�ѱ�ǥ����ȸ", "a");
	if (fp == NULL)
	{
		printf("���� ���� ����\n");
		exit(1);
	}

	printf("�̸��� �Է����ּ���: ");
	scanf("%s", search_name);
	printf("\n");
	
	for (i = 0; i < 30; i++)
	{
		if (strcmp(list[i].name, search_name) == 0)
		{
			if (strcmp(list[i].leader, "����") == 0)
			{
				strcpy(searched_company_name, list[i].company_name);
				break;
			}
		}
	}

	if (strlen(searched_company_name) == 0)
	{
		printf("������ �ƴմϴ�.\n");
		return;
	}

	for (; i < 30; i++)
	{
		if (strcmp(searched_company_name, list[i].company_name) != 0)
			break;

		t = time(NULL);
		strcpy(timestr, ctime(&t));
		timestr[strlen(timestr) - 1] = '\0';
		fprintf(fp, timestr);

		if (strcmp(list[i].leader, "����") == 0)
		{
			printf("  ����  ");
			fprintf(fp, "  ����  ");
		}
		else
		{
			printf("  ����  ");
			fprintf(fp, "  ����  ");
		}

		printf("%-20s%-10s%-30s%-40s%-80s\n", list[i].company_name, list[i].name, list[i].email, list[i].university, list[i].major);
		fprintf(fp, "%-20s%-10s%-30s%-40s%-80s\n", list[i].company_name, list[i].name, list[i].email, list[i].university, list[i].major);
	}
	fclose(fp);
	printf("\n");
}

void search_company(Student* list)
{
	int i{ 0 };
	char search_company_name[20]{ 0, }, timestr[30]{ 0, };
	time_t t;
	FILE* fp;

	fp = fopen("C:\\Users\\jin\\Desktop\\����� ������ ���_�ѱ�ǥ����ȸ", "a");
	if (fp == NULL)
	{
		printf("���� ���� ����\n");
		exit(1);
	}


	printf("\nã���� �ϴ� ������� �Է����ּ���. : ");
	scanf("%s", search_company_name);
	printf("\n");

	for (i = 0; i < 30; i++)
		if (strcmp(list[i].company_name, search_company_name) == 0)
			break;

	if (i >= 30)
	{
		printf("�ش� ������� �������� �ʽ��ϴ�.\n");
		return;
	}

	for (; i < 30; i++)
	{
		if (strcmp(search_company_name, list[i].company_name) != 0)
			break;

		t = time(NULL);
		strcpy(timestr, ctime(&t));
		timestr[strlen(timestr) - 1] = '\0';
		fprintf(fp, timestr);

		if (strcmp(list[i].leader, "����") == 0)
		{
			printf("  ����  ");
			fprintf(fp, "  ����  ");
		}
		else
		{
			printf("  ����  ");
			fprintf(fp, "  ����  ");
		}
		printf("%-20s%-10s%-30s%-40s%-80s\n", list[i].company_name, list[i].name, list[i].email, list[i].university, list[i].major);
		fprintf(fp, "%-20s%-10s%-30s%-40s%-80s\n", list[i].company_name, list[i].name, list[i].email, list[i].university, list[i].major);
	}

	fclose(fp);
}

void search_name(Student* list)
{
	int i{ 0 };
	char search_name[10]{ 0, }, timestr[30]{ 0, };
	time_t t;
	FILE* fp;

	fp = fopen("C:\\Users\\jin\\Desktop\\����� ������ ���_�ѱ�ǥ����ȸ", "a");
	if (fp == NULL)
	{
		printf("���� ���� ����\n");
		exit(1);
	}

	printf("\nã���� �ϴ� �̸��� �Է����ּ���. : ");
	scanf("%s", search_name);
	printf("\n");

	for (i = 0; i < 30; i++)
	{
		if (strcmp(list[i].name, search_name) == 0)
			break;
	}

	if (i >= 30)
	{
		printf("�ش� �̸��� �������� �ʽ��ϴ�.\n");
		return;
	}

	t = time(NULL);
	strcpy(timestr, ctime(&t));
	timestr[strlen(timestr) - 1] = '\0';
	fprintf(fp, timestr);

	if (strcmp(list[i].leader, "����") == 0)
	{
		printf("  ����  ");
		fprintf(fp, "  ����  ");
	}
	else
	{
		printf("  ����  ");
		fprintf(fp, "  ����  ");
	}
	printf("%-20s%-10s%-30s%-40s%-80s\n", list[i].company_name, list[i].name, list[i].email, list[i].university, list[i].major);
	fprintf(fp, "%-20s%-10s%-30s%-40s%-80s\n", list[i].company_name, list[i].name, list[i].email, list[i].university, list[i].major);

	fclose(fp);
}

void search_university(Student* list)
{
	bool flag{ false };
	char search_university[50]{ 0, }, timestr[30]{ 0, };
	time_t t;
	FILE* fp;

	fp = fopen("C:\\Users\\jin\\Desktop\\����� ������ ���_�ѱ�ǥ����ȸ", "a");
	if (fp == NULL)
	{
		printf("���� ���� ����\n");
		exit(1);
	}

	printf("\nã���� �ϴ� ���и��� �Է����ּ���. : ");
	scanf("%s", search_university);
	printf("\n");

	for (int i = 0; i < 30; i++)
	{
		if (strcmp(list[i].university, search_university) == 0)
		{
			flag = true;

			t = time(NULL);
			strcpy(timestr, ctime(&t));
			timestr[strlen(timestr) - 1] = '\0';
			fprintf(fp, timestr);

			if (strcmp(list[i].leader, "����") == 0)
			{
				printf("  ����  ");
				fprintf(fp, "  ����  ");
			}
			else
			{
				printf("  ����  ");
				fprintf(fp, "  ����  ");
			}
			printf("%-20s%-10s%-30s%-40s%-80s\n", list[i].company_name, list[i].name, list[i].email, list[i].university, list[i].major);
			fprintf(fp, "%-20s%-10s%-30s%-40s%-80s\n", list[i].company_name, list[i].name, list[i].email, list[i].university, list[i].major);
		}
	}

	fclose(fp);

	if (flag == false)
		printf("�ش� ���и��� �������� �ʽ��ϴ�.\n");
}