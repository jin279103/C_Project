#include "header.h"

int main()
{
	Student list[30];

	read(list);

	while (true)
	{
		int select;
		printf("���ϴ� �˻� �׸��� �����ϼ���(1: ����˻�, 2: ��������˻�, 3: �̸��˻�, 4: �б��˻�, 0: ����): ");
		scanf("%d", &select);
		if (select == 0) break;

		switch (select)
		{
		case 1:
			search_leader(list);
			break;
		case 2:
			search_company(list);
			break;
		case 3:
			search_name(list);
			break;
		case 4:
			search_university(list);
			break;
		default:
			printf("�߸� �Է��Ͽ����ϴ�. �ٽ� �Է����ּ��� \n");
		}
	}

	return 0;
}