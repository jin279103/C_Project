# include "header.h"

void input(Student* list)
{
	for (int i = 0; i < 6; i++)
	{
		printf("%d ��° ���� ������ �Է��Ͻÿ� : \n", i + 1);

		//�� ID �Է�
		printf("�� ID : ");
		scanf("%d", &list[i].id);

		//�� �̸� �Է�
		printf("�� �̸� : ");
		scanf("%s", &list[i].teamname);

		//ȸ�� �̸� �Է�
		printf("ȸ�� �̸� : ");
		scanf("%s", &list[i].company);

		printf("\n");
	}
}